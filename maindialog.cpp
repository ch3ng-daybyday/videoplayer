#include "maindialog.h"
#include "./ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    this->resize(width(),height());
    ui->voiceslider->setStyleSheet("QSlider::groove:horizontal { background: #f0f0f0; height: 8px; margin: 0 10px; }"
                                   "QSlider::handle:horizontal { background: #3399ff; width: 16px; margin: -7px 0; border-radius: 8px; }"
                                   "QSlider::sub-page:horizontal { background: #66ccff; }"
                                   "QSlider::add-page:horizontal { background: #f0f0f0; }");
    player = new QMediaPlayer(this);
    scence = new QGraphicsScene;
    audio = new QAudioOutput;
    //滑动修改音量
    connect(ui->voiceslider,&QSlider::valueChanged,player, [&](){
        float s = static_cast<float>( ui->voiceslider->value())/100.0;
        audio->setVolume(s);
        player->setAudioOutput(audio);
        ui->voicevalue->setText(QString::number(s,'f',2));
    });
}

MainDialog::~MainDialog()
{
    delete ui;
}
void MainDialog::onStateChanged(QMediaPlayer::MediaStatus state){

}
void MainDialog::onDurationChanged(qint64 duration){

}
void MainDialog::onPostionChanged(qint64 duration){

}
void MainDialog::on_openFileBt_clicked()
{
    //打开文件
    QString *strCurrectPath = new QString(QDir::homePath());//获取当前目录；
    QString strDigtitle  = "选择视频文件";
    QString strFiler  = "MP4 file(*.mp4);;file(*.*)";
    //打开视频文件过滤器
    QString AllFiles = QFileDialog::getOpenFileName(this,strDigtitle,*strCurrectPath,strFiler);
    // QMessageBox::information(this,"str",AllFiles,QMessageBox::Ok|QMessageBox::No);
    if(AllFiles.isEmpty()){
        QMessageBox::warning(this,"警告","打开文件失败",QMessageBox::Ok);
    }
    QFileInfo fileinfo(AllFiles);
    ui->videoBox->setTitle(fileinfo.fileName());
    QUrl soure = QUrl::fromLocalFile(AllFiles);
    player->setSource(soure);
    audio->setVolume(0.5);
    ui->voicevalue->setText(QString::number(audio->volume() * 100));
    player->setAudioOutput(audio);
    ui->graphicsView->setScene(scence);
    videoItem = new QGraphicsVideoItem;
    videoItem->setFlags(QGraphicsVideoItem::ItemIsMovable|QGraphicsVideoItem::ItemIsFocusable|QGraphicsVideoItem::ItemIsSelectable);
    scence->addItem(videoItem);
    player->setVideoOutput(videoItem);
    player->play();
}
void MainDialog::resizeEvent(QResizeEvent *event)  {
    QDialog::resizeEvent(event);
    // videoItem->setSize(QSize(ui->graphicsView->width()-10,ui->graphicsView->height()-10));
    // QRect rect(ui.);
    //保持纵横比
    ui->graphicsView->fitInView(scence->sceneRect(),Qt::KeepAspectRatio);
}

void MainDialog::on_playBt_clicked()
{
    player->play();
}


void MainDialog::on_suspendBt_clicked()
{
    player->pause();
}


void MainDialog::on_stopBt_clicked()
{
    player->stop();
}


void MainDialog::on_muteBt_clicked()
{

}

