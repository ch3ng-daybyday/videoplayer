#include "maindialog.h"
#include "sidebar.h"
#include "videowindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SideBar w;
    w.show();
    return a.exec();
}
