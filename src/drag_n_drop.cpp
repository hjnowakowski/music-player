#include "headers/drag_n_drop.h"
#include "ui_drag_n_drop.h"
#include <QDropEvent>
#include <QMimeData>
#include <iostream>
#include <QFileInfo>
#include <string>
#include "headers/global.h"


drag_n_drop::drag_n_drop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::drag_n_drop)
{
    ui->setupUi(this);
    QAction *open, *deletee;
    open = new QAction("Open", this);
    deletee = new QAction("Delete", this);
    connect(open,SIGNAL(triggered()),this,SLOT(on_pushButton_open_clicked()));
    connect(deletee,SIGNAL(triggered()),this,SLOT(on_pushButton_open_clicked()));
    ui->listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget->addAction(open);
    ui->listWidget->addAction(deletee);
    setAcceptDrops(true);


}

drag_n_drop::~drag_n_drop()
{
    delete ui;
}

void drag_n_drop::dragEnterEvent(QDragEnterEvent *event){
    event->accept();
}

void drag_n_drop::dragLeaveEvent(QDragLeaveEvent *event){
    event->accept();
}

void drag_n_drop::dragMoveEvent(QDragMoveEvent *event){
    event->accept();
}

void drag_n_drop::dropEvent(QDropEvent * event){

    QString nameArch;


    QList<QUrl> urls;
    QList<QUrl>::Iterator i;
    urls = event->mimeData()->urls();
    for ( i = urls.begin(); i != urls.end(); ++i){
        g_some_string = i->path();
        nameArch = i->fileName();
        ui->listWidget->addItem(nameArch);
    }

}

void drag_n_drop::on_pushButton_open_clicked()
{
    QString name;
    name = ui->lineEdit_name->text();
    if(name.isEmpty())
        return;
    ui->listWidget->addItem(name);
}

void drag_n_drop::on_pushButton_delete_clicked()
{
    delete ui->listWidget->currentItem();
}
