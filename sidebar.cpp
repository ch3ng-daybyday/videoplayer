#include "sidebar.h"
#include "ui_sidebar.h"

SideBar::SideBar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::SideBar)
{
    ui->setupUi(this);
    addPlayerList("","");
    widgetlist= new QListWidget;

}

SideBar::~SideBar()
{
    delete ui;
}
void SideBar::addPlayerList(QString parentFold,QString childFile){
    QStandardItemModel* m_standarditemmodel = new QStandardItemModel();
    QListWidgetItem* widget = new QListWidgetItem("ceshiwidget",widgetlist);
    m_standarditemmodel->setHorizontalHeaderLabels({QStringList(QStringLiteral("文件名"))});
    // m_standarditemmodel->setHorizontalHeaderLabels();

    QList<QStandardItem*> items1;
    QStandardItem* item1 =   new QStandardItem("ceshi");
    QStandardItem* item2 =   new QStandardItem("ceshi");
    items1.append(item1);
    item1->appendRow(item2);
    m_standarditemmodel->appendRow(items1);
    ui->playListTree->setModel(m_standarditemmodel);
}
