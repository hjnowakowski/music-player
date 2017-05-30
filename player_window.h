#ifndef PLAYER_WINDOW_H
#define PLAYER_WINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>


namespace Ui {
class player_window;
}

class player_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit player_window(QWidget *parent = 0);
    ~player_window();

private slots:
    void on_horizontalSlider_progress_sliderMoved(int position);

    void on_horizontalSlider_volume_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

    void on_pushButton_3_clicked();

private:
    Ui::player_window *ui;
    QMediaPlayer* player;
};

#endif // PLAYER_WINDOW_H
