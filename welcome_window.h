#ifndef WELCOME_WINDOW_H
#define WELCOME_WINDOW_H

#include <QMainWindow>
#include "sign_window..h"
#include "log_window.h"



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

    void on_Quit_clicked();


//public slots:
   //void openLoginWindow();

    void on_button_signin_clicked();

private:
    Ui::welcome_window *ui;
    MainWindow *logwindow;
    signingWindow *signwindow;
};

#endif // WELCOME_WINDOW_H
