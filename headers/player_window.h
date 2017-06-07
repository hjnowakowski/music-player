#ifndef PLAYER_WINDOW_H
#define PLAYER_WINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QDebug>
#include <QMediaMetaData>





namespace Ui {
class player_window;
}

class player_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit player_window(QWidget *parent = 0);
    ~player_window();
protected:

    void dragEnterEvent(QDragEnterEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dropEvent(QDropEvent *event);


private slots:
    void on_horizontalSlider_progress_sliderMoved(int position);

    void on_horizontalSlider_volume_sliderMoved(int position);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_6_clicked();

    void song_info();

    void on_pushButton_next_clicked();

    void on_pushButton_prev_clicked();

    void on_pushButton_setplaylist_clicked();

private:
    Ui::player_window *ui;
    QMediaPlayer* player;
    QMediaPlaylist *playlist;
};

#endif // PLAYER_WINDOW_H
