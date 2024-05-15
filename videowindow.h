#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QMainWindow>
// #include "maindialog.h"
#include <QMediaPlayer>
#include <QFileInfo>
#include <QGraphicsVideoItem>
#include <QFileDialog>
#include <QMediaDevices>
#include <QMessageBox>
#include <QAudioOutput>
#include <QListWidget>
#include <QDir>
namespace Ui {
class VideoWindow;
}

class VideoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoWindow(QWidget *parent = nullptr);
    ~VideoWindow();
    // QList<playButton> playBtns;
    QMediaPlayer * player;
    QGraphicsVideoItem * videoItem;
    QAudioOutput * audio;
    QGraphicsScene * scene;

    // MainDialog *md;
private:
    void PlayBySoure(QString);
    void opensoure();
    void adjustVolume();
    void videoStop();
    void videoPause();
    void videoPlay();
    void creatPlayerList(const QFile);
    void resizeEvent(QResizeEvent *) override;
    // void mousePressEvent(QMouseEvent*) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *) override;
    void mouseMoveEvent(QMouseEvent *) override;
    QString millisecondRevTime(qint64 ms);
    Ui::VideoWindow *ui;
};

#endif // VIDEOWINDOW_H
