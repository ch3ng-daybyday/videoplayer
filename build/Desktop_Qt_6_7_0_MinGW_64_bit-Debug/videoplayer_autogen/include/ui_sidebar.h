/********************************************************************************
** Form generated from reading UI file 'sidebar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDEBAR_H
#define UI_SIDEBAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideBar
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QTreeView *playListTree;

    void setupUi(QWidget *SideBar)
    {
        if (SideBar->objectName().isEmpty())
            SideBar->setObjectName("SideBar");
        SideBar->resize(275, 605);
        gridLayout = new QGridLayout(SideBar);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(SideBar);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(20, 100));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/toright.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        playListTree = new QTreeView(SideBar);
        playListTree->setObjectName("playListTree");
        playListTree->setMinimumSize(QSize(20, 30));

        gridLayout->addWidget(playListTree, 0, 1, 1, 1);


        retranslateUi(SideBar);

        QMetaObject::connectSlotsByName(SideBar);
    } // setupUi

    void retranslateUi(QWidget *SideBar)
    {
        SideBar->setWindowTitle(QCoreApplication::translate("SideBar", "Form", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SideBar: public Ui_SideBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBAR_H
