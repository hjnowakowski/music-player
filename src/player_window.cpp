#include "headers/player_window.h"
#include "ui_player_window.h"
#include "headers/global.h"

//drag n drop:
#include <QDragEnterEvent>
#include <QDropEvent>

//player:
#include <QMediaMetaData>
#include <QMimeData>
#include <QMediaPlaylist>

//Do testowania:
#include <iostream>
#include <string>


QString music_path;


player_window::player_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::player_window)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist(this);

    connect(player, &QMediaPlayer::positionChanged, this, &player_window::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &player_window::on_durationChanged);


    QAction *agregar, *eliminar;
    agregar = new QAction("Agregar", this);
    eliminar = new QAction("Eliminar", this);
    connect(agregar,SIGNAL(triggered()),this,SLOT(on_pushButton_3_clicked()));
    connect(eliminar,SIGNAL(triggered()),this,SLOT(on_pushButton_3_clicked()));
    ui->listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget->addAction(agregar);
    ui->listWidget->addAction(eliminar);
    setAcceptDrops(true);

    ui->label_username->setText(g_username);

    std::cout << "player_window window is opened" << std::endl;


}

player_window::~player_window()
{
    delete ui;
}

void player_window::on_horizontalSlider_progress_sliderMoved(int position)
{
        player->setPosition(position);
}

void player_window::on_horizontalSlider_volume_sliderMoved(int position)
{
        player->setVolume(position);
}

void player_window::on_pushButton_clicked()
{


    std::cout << "Play button pressed" << std::endl;
    player->setMedia(QUrl::fromLocalFile(music_path));



    std::string a;

    std::cout << player->metaData(QMediaMetaData::MediaType).toString().toStdString() << std::endl;

    player->play();

    qDebug() << player->errorString();

    ui->label_3->setText(player->metaData(QMediaMetaData::MediaType).toString());

    for(int i = 0;i <10000; i++){
        int k = 0;
        k++;
    }

    std::cout << player->metaData(QMediaMetaData::MediaType).toString().toStdString() << std::endl;

    std::cout << "end of method" << std::endl;

    //QString albumTitle = player->metaData(QMediaMetaData::AlbumTitle);
    //std::cout << albumTitle << std::endl;
    //ui->label_3->setText("Failed to open database");
    //if (player->isMetaDataAvailable()) {
        //ui->label_3->setText(player->metaData(QMediaMetaData::AlbumTitle).toString());
        //ui->label_3->setText(player->metaData(QMediaMetaData::AlbumArtist).toString());
      //}

    song_info();
}

void player_window::on_pushButton_2_clicked()
{
    ui->label_3->setText(player->metaData(QMediaMetaData::MediaType).toString());
    //qDebug() << player->metaData(QMediaMetaData::Genre).toString();

    std::cout << "song info button pressed" << std::endl;

}

void player_window::on_positionChanged(qint64 position)
{
        ui->horizontalSlider_progress->setValue(position);
}

void player_window::on_durationChanged(qint64 position)
{
        ui->horizontalSlider_progress->setMaximum(position);
}



//drag n drop:



void player_window::on_pushButton_3_clicked() //open
{
    std::cout << "Push button pressed" << std::endl;

    QString name;
    name = ui->lineEdit->text();

    if(name.isEmpty())
        return;
    ui->listWidget->addItem(name);

}

void player_window::on_pushButton_4_clicked()  //delete
{
    delete ui->listWidget->currentItem();
}

void player_window::dragEnterEvent(QDragEnterEvent *event){
    event->accept();
}

void player_window::dragLeaveEvent(QDragLeaveEvent *event){
    event->accept();
}

void player_window::dragMoveEvent(QDragMoveEvent *event){
    event->accept();
}

void player_window::dropEvent(QDropEvent *event){
    QString nombreArch;

    QList<QUrl> urls;
    QList<QUrl>::Iterator i;
    urls = event->mimeData()->urls();
    for( i = urls.begin(); i!= urls.end(); ++i){
        nombreArch = i->fileName();
        music_path = i->path();
        ui->listWidget->addItem(nombreArch);
    }

    //playlist->addMedia(QUrl(i->path()));


    playlist->addMedia(QUrl(music_path));

}

void player_window::on_pushButton_5_clicked()
{
    player->stop();
}

void player_window::on_pushButton_pause_clicked()
{
    player->pause();
}

void player_window::on_pushButton_6_clicked()
{
    player->play();
}


void player_window::song_info(){
    ui->label_3->setText(player->metaData(QMediaMetaData::MediaType).toString());
    std::cout << player->metaData(QMediaMetaData::MediaType).toString().toStdString() << std::endl;
}
