#include "linkurl.h"
#include "ui_linkurl.h"

LinkUrl::LinkUrl(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LinkUrl)
{
    ui->setupUi(this);
}

LinkUrl::~LinkUrl()
{
    delete ui;
}

void LinkUrl::on_comfirmBt_clicked()
{

}

