/********************************************************************************
** Form generated from reading UI file 'videowindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOWINDOW_H
#define UI_VIDEOWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoWindow
{
public:
    QAction *openFile;
    QAction *actionexit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGraphicsView *videoBox;
    QHBoxLayout *horizontalLayout_2;
    QSlider *playTimeSlider;
    QLabel *nowTime;
    QLabel *totalVideoTime;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *stopBT;
    QPushButton *playBt;
    QPushButton *voice;
    QSlider *voiceSlider;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *VideoWindow)
    {
        if (VideoWindow->objectName().isEmpty())
            VideoWindow->setObjectName("VideoWindow");
        VideoWindow->resize(800, 600);
        openFile = new QAction(VideoWindow);
        openFile->setObjectName("openFile");
        actionexit = new QAction(VideoWindow);
        actionexit->setObjectName("actionexit");
        centralwidget = new QWidget(VideoWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        videoBox = new QGraphicsView(centralwidget);
        videoBox->setObjectName("videoBox");

        verticalLayout->addWidget(videoBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        playTimeSlider = new QSlider(centralwidget);
        playTimeSlider->setObjectName("playTimeSlider");
        playTimeSlider->setEnabled(true);
        playTimeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(playTimeSlider);

        nowTime = new QLabel(centralwidget);
        nowTime->setObjectName("nowTime");

        horizontalLayout_2->addWidget(nowTime);

        totalVideoTime = new QLabel(centralwidget);
        totalVideoTime->setObjectName("totalVideoTime");

        horizontalLayout_2->addWidget(totalVideoTime);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        stopBT = new QPushButton(centralwidget);
        stopBT->setObjectName("stopBT");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopBT->setIcon(icon);
        stopBT->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(stopBT);

        playBt = new QPushButton(centralwidget);
        playBt->setObjectName("playBt");
        playBt->setMinimumSize(QSize(60, 60));
        playBt->setBaseSize(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playBt->setIcon(icon1);
        playBt->setIconSize(QSize(50, 50));

        horizontalLayout->addWidget(playBt);

        voice = new QPushButton(centralwidget);
        voice->setObjectName("voice");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        voice->setIcon(icon2);

        horizontalLayout->addWidget(voice);

        voiceSlider = new QSlider(centralwidget);
        voiceSlider->setObjectName("voiceSlider");
        voiceSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(voiceSlider);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        VideoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VideoWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        VideoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(VideoWindow);
        statusbar->setObjectName("statusbar");
        VideoWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(openFile);
        menu->addSeparator();
        menu->addAction(actionexit);

        retranslateUi(VideoWindow);

        QMetaObject::connectSlotsByName(VideoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *VideoWindow)
    {
        VideoWindow->setWindowTitle(QCoreApplication::translate("VideoWindow", "MainWindow", nullptr));
        openFile->setText(QCoreApplication::translate("VideoWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        actionexit->setText(QCoreApplication::translate("VideoWindow", "\351\200\200\345\207\272", nullptr));
        nowTime->setText(QString());
        totalVideoTime->setText(QCoreApplication::translate("VideoWindow", "00:00", nullptr));
        stopBT->setText(QString());
        playBt->setText(QString());
        voice->setText(QString());
        menu->setTitle(QCoreApplication::translate("VideoWindow", "\346\226\207\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoWindow: public Ui_VideoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOWINDOW_H
