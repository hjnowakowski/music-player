#ifndef PLAYER_WINDOW_H
#define PLAYER_WINDOW_H

#include <QMainWindow>

namespace Ui {
class player_window;
}

class player_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit player_window(QWidget *parent = 0);
    ~player_window();

private:
    Ui::player_window *ui;
};

#endif // PLAYER_WINDOW_H
