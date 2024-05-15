#include "sidebar.h"
#include "ui_sidebar.h"

SideBar::SideBar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SideBar)
{
    ui->setupUi(this);
    addPlayerList("","");
    // widgetlist= new QListWidget;
    this->setWindowFlags(Qt::FramelessWindowHint);
    // hboxlayout = new QHBoxLayout;
    // hboxlayout->addWidget(this);
    connect(ui->operaBt,&QPushButton::clicked,this,[&]()
            {
                if( ui->playListView->isHidden()){
                    ui->playListView->show();
                }
                else
                {
                    ui->playListView->hide();
                }
            });
}

SideBar::~SideBar()
{
    delete ui;
}
void SideBar::addPlayerList(QString parentFold,QString childFile){
    // QStandardItemModel* m_standarditemmodel = new QStandardItemModel();
    // QListWidgetItem* widget = new QListWidgetItem("ceshiwidget",widgetlist);
    // widget->setData(Qt::UserRole,"thisthis");
    // m_standarditemmodel->setHorizontalHeaderLabels({QStringList(QStringLiteral("文件名"))});
    // QList<QStandardItem*> items1;
    // QStandardItem* item1 = new QStandardItem("ceshi");
    // QStandardItem* item2 = new QStandardItem("ceshi");
    // items1.append(item1);
    // item1->appendRow(item2);
    // m_standarditemmodel->appendRow(items1);
    // ui->playListTree->setModel(m_standarditemmodel);
}
