#include "headers/sign_window.h"
#include "ui_sign_window.h"
#include <QMessageBox>
#include "headers/global.h"


signingWindow::signingWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signingWindow)
{
    ui->setupUi(this);

    users_db= QSqlDatabase::addDatabase("QSQLITE");

    QString x = QDir::currentPath();
    QString y = "/db/users.db";
    x.append(y);
    QTextStream(stdout) << "path to db" + x;

    users_db.setDatabaseName(x);

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

    if(password.length()<3){
        ui->label_status->setText("Password must be min 3 chars long😺");
        return;
    }

    if(age<="13"){
        ui->label_status->setText("You have to be at least 13 years to sign in😺");
        return;
    }

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
            ui->label_status->setText("username pis correct! yupiiii");
        }
        if(count<1){
            ui->label_status->setText("username and password are not in db!😿");

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
