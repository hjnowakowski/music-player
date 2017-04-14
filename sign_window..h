#ifndef SIGNINGWINDOW_H
#define SIGNINGWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileInfo>
#include <QtSql>


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
};

#endif // SIGNINGWINDOW_H
