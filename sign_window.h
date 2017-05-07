#ifndef SIGNINGWINDOW_H
#define SIGNINGWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileInfo>
#include <QtSql>
#include <QCalendarWidget>


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
    QCalendarWidget *calendar;
};

#endif // SIGNINGWINDOW_H
