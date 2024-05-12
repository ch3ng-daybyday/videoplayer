#ifndef LINKURL_H
#define LINKURL_H

#include <QDialog>

namespace Ui {
class LinkUrl;
}

class LinkUrl : public QDialog
{
    Q_OBJECT

public:
    explicit LinkUrl(QWidget *parent = nullptr);
    ~LinkUrl();
    QString endUrl();
private slots:
    void on_comfirmBt_clicked();

private:
    Ui::LinkUrl *ui;
};

#endif // LINKURL_H
