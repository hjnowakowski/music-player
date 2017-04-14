#include "welcome_window.h"
#include "ui_welcome_window.h"
#include "sign_window..h"
#include "log_window.h"




//#include <QMessageBox>  odkomentować jak będą potrzebne komunikaty


welcome_window::welcome_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcome_window)
{
    ui->setupUi(this);
}

welcome_window::~welcome_window()
{
    delete ui;
    //connect(button_login, SIGNAL(on_button_login_clicked()), this, SLOT(openLoginWindow());
}

void welcome_window::on_Quit_clicked()
{
    close();
}


void welcome_window::on_button_login_clicked()
{
    hide();
    logwindow = new MainWindow(this);
    logwindow->show();
}

void welcome_window::on_button_signin_clicked()
{
    hide();
    signwindow = new signingWindow(this);
    signwindow->show();
}
