#ifndef VIDEOPROGRESSBAR_H
#define VIDEOPROGRESSBAR_H

#include <QWidget>

namespace Ui {
class videoProgressBar;
}

class videoProgressBar : public QWidget
{
    Q_OBJECT

public:
    explicit videoProgressBar(QWidget *parent = nullptr);
    ~videoProgressBar();

private:
    Ui::videoProgressBar *ui;
};

#endif // VIDEOPROGRESSBAR_H
