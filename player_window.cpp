#include "player_window.h"
#include "ui_player_window.h"

player_window::player_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::player_window)
{
    ui->setupUi(this);
}

player_window::~player_window()
{
    delete ui;
}
