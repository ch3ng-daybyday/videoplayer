#include "videowindow.h"
#include "ui_videowindow.h"
#include <QMouseEvent>
#include <QTreeWidget>
#include <QTreeWidgetItem>

VideoWindow::VideoWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VideoWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("视频播放器测试版");
    // md = new MainDialog(ui->frame);
    player = new QMediaPlayer;
    videoItem = new QGraphicsVideoItem;
    audio = new QAudioOutput;
    scene = new QGraphicsScene;
    scene->setBackgroundBrush(Qt::black);
    ui->videoBox->setScene(scene);
    //打开文件，播放视频的
    connect(ui->openFile,&QAction::triggered,this,&VideoWindow::opensoure);
    connect(ui->voiceSlider,&QSlider::valueChanged,this,&VideoWindow::adjustVolume);
    connect(player,&QMediaPlayer::durationChanged,player,[=](qint64 duration){
        ui->totalVideoTime->setText(millisecondRevTime(duration));
    });
    connect(player,&QMediaPlayer::positionChanged,ui->playTimeSlider,[=](qint64 position){
        int totalTime = player->duration();
        ui->playTimeSlider->setMaximum(totalTime);
        ui->nowTime->setText(millisecondRevTime(position));
        ui->playTimeSlider->setValue(position);
    });
    connect(player,&QMediaPlayer::playbackStateChanged,this,[=](){
        if(player->playbackState()==QMediaPlayer::PausedState){
            ui->playBt->setIcon(QIcon(":/res/suspend.png"));
        }else if(player->playbackState()==QMediaPlayer::PlayingState){
            ui->playBt->setIcon(QIcon(":/res/play.png"));
        }
    });
    connect(ui->playBt,&QPushButton::clicked,ui->playBt,[=](){
        if(player->playbackState()==QMediaPlayer::PausedState){
            player->play();
        }else if(player->playbackState()==QMediaPlayer::PlayingState){
            player->pause();
        }
    });
    connect(ui->playTimeSlider,&QSlider::sliderPressed,player,[=](){
        disconnect(player,&QMediaPlayer::positionChanged,0,0);
    });
    connect(ui->playTimeSlider,&QSlider::sliderReleased,player,[=](){
        // player->play();
        player->setPosition(ui->playTimeSlider->value());
        connect(player,&QMediaPlayer::positionChanged,ui->playTimeSlider,[=](qint64 position){
            int totalTime = player->duration();
            ui->playTimeSlider->setMaximum(totalTime);
            ui->nowTime->setText(millisecondRevTime(position));
            ui->playTimeSlider->setValue(position);
        });
    });
    connect(ui->siderBt,&QPushButton::clicked,this,[&]()
            {
                if( ui->playerList->isHidden()){
                    ui->playerList->show();
                }
                else
                {
                    ui->playerList->hide();
                }
            });
    connect(ui->playerList, &QTreeWidget::itemClicked, this, [&](QTreeWidgetItem *item, int column) {
        QMessageBox::information(this, "Double Clicked", "You double clicked an item!");
    });
}
void VideoWindow::opensoure(){
    //打开文件
    QString *strCurrectPath = new QString(QDir::homePath());//获取当前目录；
    QString strDigtitle  = "选择视频文件";
    QString strFiler  = "MP4 file(*.mp4);;file(*.*)";
    //打开视频文件过滤器
    QString  AllFiles = QFileDialog::getOpenFileName(this,strDigtitle,*strCurrectPath,strFiler);
    if(AllFiles.isEmpty()){
        QMessageBox::warning(this,"警告","打开文件失败",QMessageBox::Ok);
    }
    PlayBySoure(AllFiles);
    creatPlayerList(AllFiles);
}
void VideoWindow::PlayBySoure(QString AllFiles){
    QUrl soure = QUrl::fromLocalFile(AllFiles);
    player->setSource(soure);
    audio->setVolume(ui->voiceSlider->value());
    player->setAudioOutput(audio);
    videoItem = new QGraphicsVideoItem;
    videoItem->setFlags(QGraphicsVideoItem::ItemIsMovable|QGraphicsVideoItem::ItemIsFocusable|QGraphicsVideoItem::ItemIsSelectable);
    videoItem->setSize(QSizeF(ui->videoBox->width()+10,ui->videoBox->height()+10));
    scene->addItem(videoItem);
    // scene->setBackgroundBrush(Qt::black);
    player->setVideoOutput(videoItem);
    player->play();
}
void VideoWindow::adjustVolume(){
    float voiceVolume =static_cast<float>(ui->voiceSlider->value())/100.0;
    audio->setVolume(voiceVolume);
}
void VideoWindow::resizeEvent(QResizeEvent *event) {
    QMainWindow::resizeEvent(event);
    // videoItem->setSize(QSize(ui->graphicsView->width()-10,ui->graphicsView->height()-10));
    // QRect rect(ui.);
    //保持纵横比
    ui->videoBox->fitInView(scene->sceneRect(),Qt::KeepAspectRatio);
}

QString  VideoWindow::millisecondRevTime(qint64 ms){
    int seconds = ms / 1000;
    int minutes = seconds / 60;
    int hours = minutes / 60;
    seconds %= 60;
    minutes %= 60;
    QString timeString;
    if (hours > 0) {
        timeString=QString("%1:%2:%3" ).arg(hours, 2, 10, QChar('0'))
                         .arg(minutes, 2, 10, QChar('0'))
                         .arg(seconds, 2, 10, QChar('0'));
    } else {
        timeString=QString("%1:%2" ).arg(minutes, 2, 10, QChar('0'))
                         .arg(seconds, 2, 10, QChar('0'));
    }
    return timeString;
}

void VideoWindow::creatPlayerList(const QFile file)
{
    // listWidget =  new QListWidget(ui->playerList);
    //获取当前文件的根目录
    QFileInfo fileInfo(file);
    QString _filePath  = fileInfo.filePath();
    QString absolutePath  = fileInfo.absolutePath();
    QDir dir(absolutePath);
    // 去除文件名部分，保留目录部分
    QString parentDir = dir.dirName();
    if (parentDir.isEmpty()) {
        // 如果当前目录已经是根目录，需要特殊处理
        parentDir = dir.absolutePath();
    } else {
        // 构造上一级目录的完整路径
        parentDir = dir.absolutePath().left(dir.absolutePath().lastIndexOf(QDir::separator()));
    }

    int sameCount = 0;
    int sameChildrenCount = 0;
    if(ui->playerList->topLevelItemCount() ==0 ){
        QTreeWidgetItem *topItem = new QTreeWidgetItem(ui->playerList);
        topItem->setText(0,parentDir);
        QTreeWidgetItem * childrenItem = new QTreeWidgetItem(topItem);
        childrenItem->setText(0,fileInfo.fileName());
        topItem->setExpanded(true);
        childrenItem->setData(0,Qt::UserRole,_filePath);
        qDebug()<<topItem->data(0,Qt::UserRole).toString();
    }
    else{
        for(int i =0;i<ui->playerList->topLevelItemCount();i++){
            QTreeWidgetItem * topItem = ui->playerList->topLevelItem(i);
            if(parentDir==topItem->text(0)){//当根目录文件已经存在
                for(int j = 0;j<topItem->childCount();j++){
                    QString a = topItem->child(j)->data(0,Qt::UserRole).toString();
                    qDebug() << "childe Item : "<< a << "\n";
                    qDebug() << "_filePath   : " << _filePath << "\n";
                    if(topItem->child(j)->data(0,Qt::UserRole).toString()==_filePath){
                        sameChildrenCount++;
                        break;
                    }
                }
                if(sameChildrenCount==0){
                    QTreeWidgetItem* childrenItem = new QTreeWidgetItem(topItem);
                    childrenItem->setText(0,fileInfo.fileName());
                    childrenItem->setData(0,Qt::UserRole,_filePath);
                }
                sameCount ++;
                break;
            }
            topItem->setExpanded(true);
        }
        if(sameCount==0){
            QTreeWidgetItem *topItem = new QTreeWidgetItem(ui->playerList);
            topItem->setText(0,parentDir);
            QTreeWidgetItem * childrenItem = new QTreeWidgetItem(topItem);
            childrenItem->setText(0,fileInfo.fileName());
            topItem->setExpanded(true);
            childrenItem->setData(0,Qt::UserRole,_filePath);
            qDebug()<<topItem->data(0,Qt::UserRole).toString();
        }
    }

}

void VideoWindow::mousePressEvent(QMouseEvent * event){
    if(event->button() ==Qt::LeftButton){
        QPoint  p =  event->pos();
    }
}

void VideoWindow:: mouseReleaseEvent(QMouseEvent *) {

}
void VideoWindow:: mouseMoveEvent(QMouseEvent *) {

}
VideoWindow::~VideoWindow()
{
    delete ui;
}


