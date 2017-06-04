#ifndef DRAGNDROP_H
#define DRAGNDROP_H

#include <QWidget>

namespace Ui {
class dragndrop;
}

class dragndrop : public QWidget
{
    Q_OBJECT

public:
    explicit dragndrop(QWidget *parent = 0);
    ~dragndrop();

private:
    Ui::dragndrop *ui;
};

#endif // DRAGNDROP_H
