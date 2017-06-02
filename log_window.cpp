#include "log_window.h"
#include "ui_log_window.h"
#include <QMessageBox>
#include <ctime>
#include <iostream>
#include <string>
#include "global.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    users_db = QSqlDatabase::addDatabase("QSQLITE");
    users_db.setDatabaseName("/Users/henryknowakowski/Projekt2_rozgrzewka2/users.db");

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
    time_t t = time(0);
    struct tm * now = localtime( & t );
    std::string year = std::to_string(now->tm_year + 1900);
    std::string mon = std::to_string(now->tm_mon + 1);
    std::string day = std::to_string(now->tm_mday);
    //konwersja do qstring, bo qt tego wymaga
    QString year1 = QString::fromStdString(year);
    QString mon1 = QString::fromStdString(mon);
    QString day1 = QString::fromStdString(day);


    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    ui->label_data->setText(year1+'-' + mon1+'-' + day1);  //chwilowo




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
              //TODO zaakceptowane wartości muszą iść "dalej" do playera, może zrobić je jakoś publicznymi
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
