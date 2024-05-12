/********************************************************************************
** Form generated from reading UI file 'videoprogressbar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPROGRESSBAR_H
#define UI_VIDEOPROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoProgressBar
{
public:
    QWidget *widget;
    QSlider *horizontalSlider;
    QPushButton *pushButton;

    void setupUi(QWidget *videoProgressBar)
    {
        if (videoProgressBar->objectName().isEmpty())
            videoProgressBar->setObjectName("videoProgressBar");
        videoProgressBar->resize(635, 452);
        widget = new QWidget(videoProgressBar);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(160, 60, 241, 80));
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 30, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(videoProgressBar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 230, 80, 24));

        retranslateUi(videoProgressBar);

        QMetaObject::connectSlotsByName(videoProgressBar);
    } // setupUi

    void retranslateUi(QWidget *videoProgressBar)
    {
        videoProgressBar->setWindowTitle(QCoreApplication::translate("videoProgressBar", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("videoProgressBar", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class videoProgressBar: public Ui_videoProgressBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPROGRESSBAR_H
