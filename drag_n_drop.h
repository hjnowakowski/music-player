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

protected:

    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);


private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::drag_n_drop *ui;
};

#endif // DRAG_N_DROP_H
