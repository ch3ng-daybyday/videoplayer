/********************************************************************************
** Form generated from reading UI file 'linkurl.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKURL_H
#define UI_LINKURL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LinkUrl
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *UrlEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *comfirmBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBt;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *LinkUrl)
    {
        if (LinkUrl->objectName().isEmpty())
            LinkUrl->setObjectName("LinkUrl");
        LinkUrl->resize(403, 174);
        gridLayout = new QGridLayout(LinkUrl);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LinkUrl);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        UrlEdit = new QLineEdit(LinkUrl);
        UrlEdit->setObjectName("UrlEdit");
        UrlEdit->setMinimumSize(QSize(300, 0));

        horizontalLayout->addWidget(UrlEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        comfirmBt = new QPushButton(LinkUrl);
        comfirmBt->setObjectName("comfirmBt");

        horizontalLayout_2->addWidget(comfirmBt);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelBt = new QPushButton(LinkUrl);
        cancelBt->setObjectName("cancelBt");

        horizontalLayout_2->addWidget(cancelBt);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(LinkUrl);

        QMetaObject::connectSlotsByName(LinkUrl);
    } // setupUi

    void retranslateUi(QDialog *LinkUrl)
    {
        LinkUrl->setWindowTitle(QCoreApplication::translate("LinkUrl", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LinkUrl", "URL\357\274\232", nullptr));
        comfirmBt->setText(QCoreApplication::translate("LinkUrl", "\346\211\223\345\274\200 ", nullptr));
        cancelBt->setText(QCoreApplication::translate("LinkUrl", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinkUrl: public Ui_LinkUrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKURL_H
