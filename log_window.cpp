#include "log_window.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
        if(count==1)
            ui->label_status->setText("username and password are correct!😺");
        if(count>1)
            ui->label_status->setText("duplicate username and password!😾");
        if(count<1)
            ui->label_status->setText("username and password are not correct!😿");
    }

    // ponieżej znajduje się wcześniejsze rozwiązanie, które polego na porównaniu wpisanych danych z domyślnymi, tutaj: username = "test" i password = "test"

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
