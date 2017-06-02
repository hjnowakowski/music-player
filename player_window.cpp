#include "player_window.h"
#include "ui_player_window.h"
#include <iostream>
#include "global.h"
#include <3rdparty/taglib/1.11.1/include/taglib/fileref.h>
#include <3rdparty/taglib/1.11.1/include/taglib/tag.h>
#include <3rdparty/taglib/1.11.1/include/taglib/tpropertymap.h>
#include <QMediaMetaData>
#include <QTest>
#include <string>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDropEvent>


QString music_path;


player_window::player_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::player_window)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

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
    player->play();


    std::string a;

    std::cout << player->metaData(QMediaMetaData::MediaType).toString().toStdString() << std::endl;

    //QTest::qSleep ( 30000 );
    qDebug() << player->errorString();







    ui->label_3->setText(player->metaData(QMediaMetaData::MediaType).toString());



    //QString albumTitle = player->metaData(QMediaMetaData::AlbumTitle);
    //std::cout << albumTitle << std::endl;
    //ui->label_3->setText("Failed to open database");
    //if (player->isMetaDataAvailable()) {
        //ui->label_3->setText(player->metaData(QMediaMetaData::AlbumTitle).toString());
        //ui->label_3->setText(player->metaData(QMediaMetaData::AlbumArtist).toString());
      //}


}

void player_window::on_pushButton_2_clicked()
{
    ui->label_3->setText(player->metaData(QMediaMetaData::MediaType).toString());
    //qDebug() << player->metaData(QMediaMetaData::Genre).toString();

    std::cout << "Stop button pressed" << std::endl;



//     QStringList genre = player->metaData("Genere").toStringList();

//     for (QStringList::Iterator S =  genre.begin(); S != genre.end(); S++)
//           {
//                 ui->label_3->setText(*S);
//           }
}

void player_window::on_positionChanged(qint64 position)
{
        ui->horizontalSlider_progress->setValue(position);
}

void player_window::on_durationChanged(qint64 position)
{
        ui->horizontalSlider_progress->setMaximum(position);
}

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

}

void player_window::on_pushButton_5_clicked()
{
    player->stop();
}
