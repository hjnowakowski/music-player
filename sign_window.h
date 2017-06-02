#ifndef SIGNINGWINDOW_H
#define SIGNINGWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileInfo>
#include <QtSql>
#include <QCalendarWidget>
#include <iostream>
#include "player_window.h"



namespace Ui {
class signingWindow;
}

class signingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit signingWindow(QWidget *parent = 0);
    ~signingWindow();

private slots:
    void on_pushButton_signin_clicked();

private:
    Ui::signingWindow *ui;
    QSqlDatabase users_db;
    QCalendarWidget *calendar; //TODO: usunąć
    player_window *playerwindow;

};

#endif // SIGNINGWINDOW_H
