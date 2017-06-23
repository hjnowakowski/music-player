/********************************************************************************
** Form generated from reading UI file 'player_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_WINDOW_H
#define UI_PLAYER_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player_window
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider_progress;
    QPushButton *pushButton_5;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_6;
    QPushButton *pushButton_next;
    QPushButton *pushButton_prev;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLabel *label_username;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_info_title;
    QLabel *label_info_album;
    QLabel *label_info_artist;
    QLabel *label_info_musicgenere;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *horizontalSlider_volume;
    QPushButton *pushButton_save_playlist;
    QPushButton *pushButton_open_playlist;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *player_window)
    {
        if (player_window->objectName().isEmpty())
            player_window->setObjectName(QStringLiteral("player_window"));
        player_window->resize(492, 562);
        player_window->setStyleSheet(QLatin1String("color: hex(#616161);\n"
"background-color: hex(#616161);"));
        centralwidget = new QWidget(player_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 70, 331, 331));
        listWidget->setDragEnabled(true);
        listWidget->setDragDropOverwriteMode(true);
        listWidget->setDragDropMode(QAbstractItemView::DragDrop);
        listWidget->setDefaultDropAction(Qt::MoveAction);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(380, 150, 80, 24));
        horizontalSlider_progress = new QSlider(centralwidget);
        horizontalSlider_progress->setObjectName(QStringLiteral("horizontalSlider_progress"));
        horizontalSlider_progress->setGeometry(QRect(10, 490, 491, 20));
        horizontalSlider_progress->setMouseTracking(false);
        horizontalSlider_progress->setAcceptDrops(false);
        horizontalSlider_progress->setOrientation(Qt::Horizontal);
        horizontalSlider_progress->setInvertedAppearance(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 410, 51, 24));
        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(430, 370, 61, 24));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(370, 370, 61, 24));
        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(430, 410, 41, 24));
        pushButton_prev = new QPushButton(centralwidget);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setGeometry(QRect(380, 410, 41, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 20, 193, 18));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout->addWidget(label_username);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 460, 481, 18));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_info_title = new QLabel(layoutWidget1);
        label_info_title->setObjectName(QStringLiteral("label_info_title"));

        horizontalLayout_2->addWidget(label_info_title);

        label_info_album = new QLabel(layoutWidget1);
        label_info_album->setObjectName(QStringLiteral("label_info_album"));

        horizontalLayout_2->addWidget(label_info_album);

        label_info_artist = new QLabel(layoutWidget1);
        label_info_artist->setObjectName(QStringLiteral("label_info_artist"));

        horizontalLayout_2->addWidget(label_info_artist);

        label_info_musicgenere = new QLabel(layoutWidget1);
        label_info_musicgenere->setObjectName(QStringLiteral("label_info_musicgenere"));

        horizontalLayout_2->addWidget(label_info_musicgenere);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 430, 231, 18));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSlider_volume = new QSlider(layoutWidget2);
        horizontalSlider_volume->setObjectName(QStringLiteral("horizontalSlider_volume"));
        horizontalSlider_volume->setValue(99);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_volume);

        pushButton_save_playlist = new QPushButton(centralwidget);
        pushButton_save_playlist->setObjectName(QStringLiteral("pushButton_save_playlist"));
        pushButton_save_playlist->setGeometry(QRect(370, 80, 121, 24));
        pushButton_open_playlist = new QPushButton(centralwidget);
        pushButton_open_playlist->setObjectName(QStringLiteral("pushButton_open_playlist"));
        pushButton_open_playlist->setGeometry(QRect(370, 110, 121, 24));
        player_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(player_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 492, 22));
        player_window->setMenuBar(menubar);
        statusbar = new QStatusBar(player_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        player_window->setStatusBar(statusbar);
        toolBar = new QToolBar(player_window);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        player_window->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(player_window);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        player_window->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(player_window);
        toolBar_3->setObjectName(QStringLiteral("toolBar_3"));
        player_window->addToolBar(Qt::TopToolBarArea, toolBar_3);

        retranslateUi(player_window);

        QMetaObject::connectSlotsByName(player_window);
    } // setupUi

    void retranslateUi(QMainWindow *player_window)
    {
        player_window->setWindowTitle(QApplication::translate("player_window", "Music Player", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("player_window", "delete", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("player_window", "Stop", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("player_window", "Pause", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("player_window", "Play", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("player_window", "Next", Q_NULLPTR));
        pushButton_prev->setText(QApplication::translate("player_window", "Prev", Q_NULLPTR));
        label_8->setText(QApplication::translate("player_window", "Aktualny u\305\274ytkownik", Q_NULLPTR));
        label_username->setText(QApplication::translate("player_window", "username", Q_NULLPTR));
        label_info_title->setText(QApplication::translate("player_window", "title", Q_NULLPTR));
        label_info_album->setText(QApplication::translate("player_window", "album", Q_NULLPTR));
        label_info_artist->setText(QApplication::translate("player_window", "artist", Q_NULLPTR));
        label_info_musicgenere->setText(QApplication::translate("player_window", "musicgenere", Q_NULLPTR));
        label_2->setText(QApplication::translate("player_window", "Volume", Q_NULLPTR));
        pushButton_save_playlist->setText(QApplication::translate("player_window", "save playlist", Q_NULLPTR));
        pushButton_open_playlist->setText(QApplication::translate("player_window", "open playlist", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("player_window", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("player_window", "toolBar_2", Q_NULLPTR));
        toolBar_3->setWindowTitle(QApplication::translate("player_window", "toolBar_3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class player_window: public Ui_player_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_WINDOW_H
