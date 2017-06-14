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

//zapis:
#include <QFileDialog>
#include <QDebug>

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
    player->setPlaylist(playlist);
    //song_info();


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


    ui->label_info_musicgenere->setText(player->metaData(QMediaMetaData::MediaType).toString());
    ui->label_info_album->setText(player->metaData(QMediaMetaData::Title).toString());
    ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumTitle).toString());
    //ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumArtist).toString());
    ui->label_info_title->setText(player->metaData(QMediaMetaData::Lyrics).toString());


    QString x = QDir::currentPath();
    QString y = "/playlist/playlist.txt";

        //QString fn=QFileDialog::getSaveFileName(this,"Save file",QDir::currentPath(),"Text files (.txt);;All files (.*)");


    x.append(y);
    std::string path = x.toUtf8().constData();



    std::cout << path << std::endl;
}

player_window::~player_window()
{
    delete ui;
}




//Music player methods:

void player_window::on_horizontalSlider_progress_sliderMoved(int position)
{
        player->setPosition(position);
}

void player_window::on_horizontalSlider_volume_sliderMoved(int position)
{
        player->setVolume(position);
}



void player_window::on_positionChanged(qint64 position)
{
    ui->horizontalSlider_progress->setValue(position);
}

void player_window::on_durationChanged(qint64 position)
{
    ui->horizontalSlider_progress->setMaximum(position);
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
    player->play();  //play from pause


    //song_info();


    ui->label_info_musicgenere->setText(player->metaData(QMediaMetaData::MediaType).toString());
    ui->label_info_album->setText(player->metaData(QMediaMetaData::Title).toString());
    ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumTitle).toString());
    //ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumArtist).toString());
    ui->label_info_title->setText(player->metaData(QMediaMetaData::Lyrics).toString());

}


//drag n drop:



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
        //music_path = i->path();
        ui->listWidget->addItem(nombreArch);
        playlist->addMedia(QUrl::fromLocalFile(i->path()));
    }
    //playlist->addMedia(QUrl(i->path()));

    //playlist->addMedia(QUrl::fromLocalFile(music_path));

}





void player_window::on_pushButton_next_clicked()
{
    playlist->next();

    ui->label_info_musicgenere->setText(player->metaData(QMediaMetaData::MediaType).toString());
    ui->label_info_album->setText(player->metaData(QMediaMetaData::Title).toString());
    ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumTitle).toString());
    //ui->label_info_artist->setText(player->metaData(QMediaMetaData::AlbumArtist).toString());
    ui->label_info_title->setText(player->metaData(QMediaMetaData::Lyrics).toString());


}

void player_window::on_pushButton_prev_clicked()
{
    playlist->previous();
}



//playlist




void player_window::on_pushButton_save_playlist_clicked()
{
    QString x = QDir::currentPath();
    QString y = "/playlist/"+g_username+"playlist.txt";
    x.append(y);
    //QString path1 = QDir::currentPath()+"/playlist/playlist.txt";

    //QString fn=QFileDialog::getSaveFileName(this,"Save file",QDir::currentPath(),"Text files (.txt);;All files (.*)");

    //std::string path = fn.toUtf8().constData();
    //std::cout << path << std::endl;

    //std::string path = x.toUtf8().constData();
    //std::cout << path << std::endl;


    if(playlist->save(QUrl::fromLocalFile(x),"m3u")){
        std::cout << "Playlist saved succesfully" << std::endl;
    }


    //qDebug() << ;

    //delete QMediaPlaylist;
}

void player_window::on_pushButton_open_playlist_clicked()
{
    playlist->clear();
    ui->listWidget->clear();

    QString x = QDir::currentPath();
    QString y = "/playlist/"+g_username+"playlist.txt";
    x.append(y);
    QFile inputFile(x);
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString song = in.readLine();
          song.remove("file://");
          playlist->addMedia(QUrl::fromLocalFile(song));
          ui->listWidget->addItem(QUrl(song).fileName());
       }
       inputFile.close();
    }
}
