#ifndef MAINDIALOG_H
#define MAINDIALOG_H
#pragma execution_character_set("utf-8")
#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QGraphicsVideoItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QAudioOutput>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainDialog;
}
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();
    QMediaPlayer * player;
    QGraphicsVideoItem * videoItem;
    QVideoWidget * video;
    QString durationtime,postiontime;
    // QGraphicsView *gview;
    QGraphicsScene * scence;
    QAudioOutput *audio ;
private slots:
    void onStateChanged(QMediaPlayer::MediaStatus);
    void onDurationChanged(qint64);
    void onPostionChanged(qint64);

    void on_openFileBt_clicked();

    void on_playBt_clicked();

    void on_suspendBt_clicked();

    void on_stopBt_clicked();
    //重写一下窗口大小改变的事件
    void resizeEvent(QResizeEvent *) override;

    void on_muteBt_clicked();

private:
    Ui::MainDialog *ui;
};
#endif // MAINDIALOG_H
