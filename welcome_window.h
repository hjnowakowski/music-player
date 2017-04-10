#ifndef WELCOME_WINDOW_H
#define WELCOME_WINDOW_H

#include <QMainWindow>
#include "mainwindow.h"






namespace Ui {
class welcome_window;
}

class welcome_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit welcome_window(QWidget *parent = 0);
    ~welcome_window();

private slots:
    void on_button_login_clicked();

//public slots:
   //void openLoginWindow();

private:
    Ui::welcome_window *ui;
    MainWindow *logwindow;
};

#endif // WELCOME_WINDOW_H
