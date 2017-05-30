#include "welcome_window.h"
#include "ui_welcome_window.h"
#include "sign_window.h"
#include "log_window.h"
#include "drag_n_drop.h"



welcome_window::welcome_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::welcome_window)
{
    ui->setupUi(this);
}

welcome_window::~welcome_window()
{
    delete ui;
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

void welcome_window::on_pushButton_player_clicked()
{
    hide();
    playerwindow = new player_window(this);
    playerwindow->show();
}



void welcome_window::on_pushButton_dragndrop_clicked()
{
    hide();
    drag_drop = new drag_n_drop(this);
    drag_drop->show();
}
