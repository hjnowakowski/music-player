#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileInfo>
#include <QtSql>



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Quit_clicked();

    void on_lineEdit_editingFinished();

    void on_pushButton_Login_clicked();

    void on_back_Button_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase users_db;
};

#endif // MAINWINDOW_H
