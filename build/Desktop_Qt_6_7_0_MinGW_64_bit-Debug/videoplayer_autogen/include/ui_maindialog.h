/********************************************************************************
** Form generated from reading UI file 'maindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDIALOG_H
#define UI_MAINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *videoBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QSlider *horizontalSlider_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *_2;
    QPushButton *openFileBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *playBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *suspendBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *stopBt;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *muteBt;
    QSlider *voiceslider;
    QLabel *voicevalue;

    void setupUi(QDialog *MainDialog)
    {
        if (MainDialog->objectName().isEmpty())
            MainDialog->setObjectName("MainDialog");
        MainDialog->resize(813, 538);
        gridLayout_2 = new QGridLayout(MainDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        videoBox = new QGroupBox(MainDialog);
        videoBox->setObjectName("videoBox");
        gridLayout = new QGridLayout(videoBox);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        graphicsView = new QGraphicsView(videoBox);
        graphicsView->setObjectName("graphicsView");
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);

        verticalLayout->addWidget(graphicsView);

        horizontalSlider_2 = new QSlider(videoBox);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(videoBox);

        groupBox = new QGroupBox(MainDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 60));
        groupBox->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 15, 661, 31));
        _2 = new QHBoxLayout(layoutWidget);
        _2->setObjectName("_2");
        _2->setContentsMargins(0, 0, 0, 0);
        openFileBt = new QPushButton(layoutWidget);
        openFileBt->setObjectName("openFileBt");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/C:/Users/panch/Downloads/res/fileicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFileBt->setIcon(icon);

        _2->addWidget(openFileBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer);

        playBt = new QPushButton(layoutWidget);
        playBt->setObjectName("playBt");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/C:/Users/panch/Downloads/res/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        playBt->setIcon(icon1);

        _2->addWidget(playBt);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_2);

        suspendBt = new QPushButton(layoutWidget);
        suspendBt->setObjectName("suspendBt");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/C:/Users/panch/Downloads/res/suspend.png"), QSize(), QIcon::Normal, QIcon::Off);
        suspendBt->setIcon(icon2);

        _2->addWidget(suspendBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_3);

        stopBt = new QPushButton(layoutWidget);
        stopBt->setObjectName("stopBt");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/C:/Users/panch/Downloads/res/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopBt->setIcon(icon3);

        _2->addWidget(stopBt);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        _2->addItem(horizontalSpacer_4);

        muteBt = new QPushButton(layoutWidget);
        muteBt->setObjectName("muteBt");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/C:/Users/panch/Downloads/res/sound.png"), QSize(), QIcon::Normal, QIcon::Off);
        muteBt->setIcon(icon4);

        _2->addWidget(muteBt);

        voiceslider = new QSlider(layoutWidget);
        voiceslider->setObjectName("voiceslider");
        voiceslider->setMinimumSize(QSize(150, 0));
        voiceslider->setMaximum(100);
        voiceslider->setSingleStep(1);
        voiceslider->setOrientation(Qt::Horizontal);

        _2->addWidget(voiceslider);

        voicevalue = new QLabel(layoutWidget);
        voicevalue->setObjectName("voicevalue");

        _2->addWidget(voicevalue);

        openFileBt->raise();
        playBt->raise();
        suspendBt->raise();
        stopBt->raise();
        muteBt->raise();
        voiceslider->raise();
        voicevalue->raise();

        verticalLayout_2->addWidget(groupBox);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(MainDialog);

        QMetaObject::connectSlotsByName(MainDialog);
    } // setupUi

    void retranslateUi(QDialog *MainDialog)
    {
        MainDialog->setWindowTitle(QCoreApplication::translate("MainDialog", "MainDialog", nullptr));
        videoBox->setTitle(QCoreApplication::translate("MainDialog", "GroupBox", nullptr));
        groupBox->setTitle(QString());
        openFileBt->setText(QCoreApplication::translate("MainDialog", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        playBt->setText(QCoreApplication::translate("MainDialog", "  \346\222\255   \346\224\276", nullptr));
        suspendBt->setText(QCoreApplication::translate("MainDialog", "  \346\232\202   \345\201\234", nullptr));
        stopBt->setText(QCoreApplication::translate("MainDialog", "   \345\201\234   \346\255\242", nullptr));
        muteBt->setText(QString());
        voicevalue->setText(QCoreApplication::translate("MainDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainDialog: public Ui_MainDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDIALOG_H
