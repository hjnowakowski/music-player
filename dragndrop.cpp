#include "dragndrop.h"
#include "ui_dragndrop.h"

dragndrop::dragndrop(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dragndrop)
{
    ui->setupUi(this);
}

dragndrop::~dragndrop()
{
    delete ui;
}
