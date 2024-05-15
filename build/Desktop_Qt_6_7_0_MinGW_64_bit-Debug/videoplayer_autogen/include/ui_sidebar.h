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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SideBar
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *operaBt;
    QTreeView *playListView;

    void setupUi(QWidget *SideBar)
    {
        if (SideBar->objectName().isEmpty())
            SideBar->setObjectName("SideBar");
        SideBar->resize(214, 605);
        horizontalLayout_2 = new QHBoxLayout(SideBar);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        operaBt = new QPushButton(SideBar);
        operaBt->setObjectName("operaBt");
        operaBt->setMinimumSize(QSize(20, 100));
        operaBt->setMaximumSize(QSize(20, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/toright.png"), QSize(), QIcon::Normal, QIcon::Off);
        operaBt->setIcon(icon);

        horizontalLayout->addWidget(operaBt);

        playListView = new QTreeView(SideBar);
        playListView->setObjectName("playListView");
        playListView->setMinimumSize(QSize(20, 550));

        horizontalLayout->addWidget(playListView);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SideBar);

        QMetaObject::connectSlotsByName(SideBar);
    } // setupUi

    void retranslateUi(QWidget *SideBar)
    {
        SideBar->setWindowTitle(QCoreApplication::translate("SideBar", "Form", nullptr));
        operaBt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SideBar: public Ui_SideBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDEBAR_H
