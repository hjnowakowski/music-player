#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//comment

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

    if(username == "test" && password == "test"){
        QMessageBox::information(this, "Login", "Username and password are correct!!");
    }
    else{
        QMessageBox::warning(this, "Login", "Username and password are not correct 😝");
    }
}
