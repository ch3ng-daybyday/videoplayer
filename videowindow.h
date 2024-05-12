#ifndef VIDEOWINDOW_H
#define VIDEOWINDOW_H

#include <QMainWindow>
// #include "maindialog.h"
#include <QMediaPlayer>

#include <QGraphicsVideoItem>
#include <QFileDialog>
#include <QMediaDevices>
#include <QMessageBox>
#include <QAudioOutput>
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
    void openSoureAndPlay();
    void adjustVolume();
    void videoStop();
    void videoPause();
    void videoPlay();
    void resizeEvent(QResizeEvent *) override;
    // void mousePressEvent(QMouseEvent*) override;
    void mousePressEvent(QMouseEvent *event) override;
    QString millisecondRevTime(qint64 ms);

    Ui::VideoWindow *ui;
};

#endif // VIDEOWINDOW_H
