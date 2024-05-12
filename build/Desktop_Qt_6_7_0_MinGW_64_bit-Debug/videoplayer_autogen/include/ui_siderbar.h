/********************************************************************************
** Form generated from reading UI file 'siderbar.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIDERBAR_H
#define UI_SIDERBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiderBar
{
public:
    QTreeView *treeView;

    void setupUi(QWidget *SiderBar)
    {
        if (SiderBar->objectName().isEmpty())
            SiderBar->setObjectName("SiderBar");
        SiderBar->resize(447, 629);
        treeView = new QTreeView(SiderBar);
        treeView->setObjectName("treeView");
        treeView->setGeometry(QRect(50, 50, 256, 192));

        retranslateUi(SiderBar);

        QMetaObject::connectSlotsByName(SiderBar);
    } // setupUi

    void retranslateUi(QWidget *SiderBar)
    {
        SiderBar->setWindowTitle(QCoreApplication::translate("SiderBar", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiderBar: public Ui_SiderBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIDERBAR_H
