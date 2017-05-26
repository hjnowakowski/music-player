#ifndef DRAG_N_DROP_H
#define DRAG_N_DROP_H

#include <QMainWindow>

namespace Ui {
class drag_n_drop;
}

class drag_n_drop : public QMainWindow
{
    Q_OBJECT

public:
    explicit drag_n_drop(QWidget *parent = 0);
    ~drag_n_drop();

private:
    Ui::drag_n_drop *ui;
};

#endif // DRAG_N_DROP_H
