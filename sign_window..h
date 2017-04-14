#ifndef SIGNINGWINDOW_H
#define SIGNINGWINDOW_H

#include <QMainWindow>

namespace Ui {
class signingWindow;
}

class signingWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit signingWindow(QWidget *parent = 0);
    ~signingWindow();

private:
    Ui::signingWindow *ui;
};

#endif // SIGNINGWINDOW_H
