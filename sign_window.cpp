#include "signingwindow.h"
#include "ui_signingwindow.h"

signingWindow::signingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signingWindow)
{
    ui->setupUi(this);
}

signingWindow::~signingWindow()
{
    delete ui;
}
