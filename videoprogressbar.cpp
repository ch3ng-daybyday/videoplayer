#include "videoprogressbar.h"
#include "ui_videoprogressbar.h"

videoProgressBar::videoProgressBar(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::videoProgressBar)
{
    ui->setupUi(this);
}

videoProgressBar::~videoProgressBar()
{
    delete ui;
}
