#include "sign_window.h"
#include "ui_sign_window.h"
#include <QMessageBox>
#include "global.h"





signingWindow::signingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signingWindow)
{
    ui->setupUi(this);

    users_db= QSqlDatabase::addDatabase("QSQLITE");
    users_db.setDatabaseName("/Users/henryknowakowski/Projekt2_rozgrzewka2/users.db");

    //dir to db is different on your devices, to make it easy to paste, comment your own below

    //Users/henryknowakowski/Projekt2_rozgrzewka2/users.db  Henryk Nowakowski


    if(!users_db.open())
        ui->label_status->setText("Failed to open database");
    else{
        ui->label_status->setText("Connected...");
        std::cout << "lalala"<< std::endl;
    }
}

signingWindow::~signingWindow()
{
    delete ui;
}

void signingWindow::on_pushButton_signin_clicked()
{
    QString username = ui->lineEdit_newusername->text();
    QString password = ui->lineEdit_newpassword->text();
    QString name = ui->lineEdit_name->text();
    QString age = ui->spinBox_age->text();



    if(!users_db.isOpen()){
        qDebug()<<"Failed to open database";
        return;
    }

    QSqlQuery qry;

    int count = 0;

    if(qry.exec("select * from users where username='"+ username +"';")){
        while(qry.next()){
            count++;
        }
        if(count==1){
            ui->label_status->setText("username and password are in db!😺");
            QMessageBox::warning(this, "Sign in", "such user already exists");
        }
        if(count>1){
            ui->label_status->setText("username is correct! yupiiii");
            //todo dodanie użytkownika + exepcion
        }
        if(count<1){
            ui->label_status->setText("username and password are not in db!😿");

            //if(qry.exec("insert into users (id, name, age, username, password) values ($next_id, :"+name+", "+age+", :"+username+", :"+password+");")) QMessageBox::information(this, "Sign in", "Data accepted!");
            //else QMessageBox::warning(this, "Error", qry.lastError().text()+"Error code: "+qry.lastError().number());

            qry.prepare("INSERT INTO users (id, name, age, username, password) VALUES ( null, :name, :age, :username, :password)");  //id przyjmuje wartość null, bo sam się potrafi inkrementować
            qry.bindValue(":name", name);
            qry.bindValue(":age", age);
            qry.bindValue(":username", username);
            qry.bindValue(":password", password);
            qry.exec();

            g_username = username;
            hide();
            playerwindow = new player_window(this);
            playerwindow->show();

        }
    }
    else QMessageBox::warning(this, "Error with finding data in users.db: ", qry.lastError().text()+"Error code: "+qry.lastError().number());
}
