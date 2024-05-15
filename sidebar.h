#ifndef SIDEBAR_H
#define SIDEBAR_H
#include <QStandardItemModel>
#include <QStandardItem>
#include <QWidget>
#include <QListWidgetItem>
// #include <QHBoxLayout>
#include <QListWidget>
// #include <QHBoxLayouts>
namespace Ui {
class SideBar;
}

class SideBar : public QWidget
{
    Q_OBJECT

public:
    QListWidget* widgetlist;
    explicit SideBar(QWidget *parent = nullptr);
    // QHBoxLayout * hboxlayout;

    ~SideBar();
    void addPlayerList(QString,QString);
private:
    Ui::SideBar *ui;
};

#endif // SIDEBAR_H
