#include "drag_n_drop.h"
#include "ui_drag_n_drop.h"

drag_n_drop::drag_n_drop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::drag_n_drop)
{
    ui->setupUi(this);
}

drag_n_drop::~drag_n_drop()
{
    delete ui;
}
