#include "headers/log_window.h"
#include "ui_log_window.h"
#include <QMessageBox>
#include <ctime>
#include <iostream>
#include <string>
#include "headers/global.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    users_db = QSqlDatabase::addDatabase("QSQLITE");

    QString x = QDir::currentPath();
    QString y = "/db/users.db";
    x.append(y);
    QTextStream(stdout) << "path to db" + x;


    users_db.setDatabaseName(x);

    if(!users_db.open())
        ui->label_status->setText("Failed to open database");
    else
        ui->label_status->setText("Connected...");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Quit_clicked()
{
    close();
}

void MainWindow::on_lineEdit_editingFinished()
{

}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(!users_db.isOpen()){
        qDebug()<<"Failed to open database";
        return;
    }

    QSqlQuery qry;

    int count = 0;

    if(qry.exec("select * from users where username='"+ username +"'and password='"+password+"';")){
        while(qry.next()){
            count++;
        }
        if(count==1){
            ui->label_status->setText("username and password are correct!😺");
            g_username = username;
            hide();
            playerwindow = new player_window(this);
            playerwindow->show();
        }
        if(count>1)
            ui->label_status->setText("duplicate username and password!😾");
        if(count<1)
            ui->label_status->setText("Wrong username or password!😿");
    }    
}

void MainWindow::on_pushButton_clicked()
{
    return;
}
