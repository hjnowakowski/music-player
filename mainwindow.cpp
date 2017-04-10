#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb= QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/Users/henryknowakowski/Projekt2_rozgrzewka2/users.db");

    if(!mydb.open())
        ui->label->setText("Failed to open database");
    else
        ui->label->setText("Connected...");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Quit_clicked()
{
    close();
}

void MainWindow::on_lineEdit_editingFinished() //można usunąć?
{

}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open database";
        return;
    }

    QSqlQuery qry;

    int count = 0;; //sprawdzić czy potrzebne

    if(qry.exec("select * from users where username='"+ username +"'and password='"+password+"';")){
        while(qry.next()){
            count++;
        }
        if(count==1)
            ui->label->setText("username and password are correct!😺");
        if(count>1)
            ui->label->setText("duplicate username and password!😾");
        if(count<1)
            ui->label->setText("username and password are not correct!😿");
    }

    //if(username == "test" && password == "test"){
        //QMessageBox::information(this, "Login", "Username and password are correct!!");
        //hide();
        //secDialog = new SecDialog(this);
        //secDialog->show();
   //}
    //else{
        //QMessageBox::warning(this, "Login", "Username and password are not correct 😝");
    //}
}
