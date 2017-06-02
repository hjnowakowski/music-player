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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player_window
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QSlider *horizontalSlider_progress;
    QLabel *label;
    QSlider *horizontalSlider_volume;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QLabel *label_username;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *player_window)
    {
        if (player_window->objectName().isEmpty())
            player_window->setObjectName(QStringLiteral("player_window"));
        player_window->resize(580, 427);
        centralwidget = new QWidget(player_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 350, 241, 16));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 10, 251, 261));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(310, 60, 113, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 20, 80, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(310, 100, 80, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(340, 210, 60, 16));
        horizontalSlider_progress = new QSlider(centralwidget);
        horizontalSlider_progress->setObjectName(QStringLiteral("horizontalSlider_progress"));
        horizontalSlider_progress->setGeometry(QRect(10, 320, 341, 20));
        horizontalSlider_progress->setMouseTracking(false);
        horizontalSlider_progress->setAcceptDrops(false);
        horizontalSlider_progress->setOrientation(Qt::Horizontal);
        horizontalSlider_progress->setInvertedAppearance(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 300, 60, 16));
        horizontalSlider_volume = new QSlider(centralwidget);
        horizontalSlider_volume->setObjectName(QStringLiteral("horizontalSlider_volume"));
        horizontalSlider_volume->setGeometry(QRect(370, 350, 160, 16));
        horizontalSlider_volume->setValue(99);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 350, 60, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(380, 260, 80, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 320, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 340, 111, 24));
        label_username = new QLabel(centralwidget);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(430, 0, 141, 16));
        pushButton_pause = new QPushButton(centralwidget);
        pushButton_pause->setObjectName(QStringLiteral("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(380, 290, 80, 24));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(420, 170, 121, 24));
        player_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(player_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 580, 22));
        player_window->setMenuBar(menubar);
        statusbar = new QStatusBar(player_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        player_window->setStatusBar(statusbar);

        retranslateUi(player_window);

        QMetaObject::connectSlotsByName(player_window);
    } // setupUi

    void retranslateUi(QMainWindow *player_window)
    {
        player_window->setWindowTitle(QApplication::translate("player_window", "Music Player", Q_NULLPTR));
        label_3->setText(QApplication::translate("player_window", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("player_window", "open", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("player_window", "delete", Q_NULLPTR));
        label_4->setText(QApplication::translate("player_window", "name", Q_NULLPTR));
        label->setText(QApplication::translate("player_window", "Progress", Q_NULLPTR));
        label_2->setText(QApplication::translate("player_window", "Volume", Q_NULLPTR));
        pushButton->setText(QApplication::translate("player_window", "Start", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("player_window", "Stop", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("player_window", "Song info", Q_NULLPTR));
        label_username->setText(QApplication::translate("player_window", "username", Q_NULLPTR));
        pushButton_pause->setText(QApplication::translate("player_window", "Pause", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("player_window", "Play from pause", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class player_window: public Ui_player_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_WINDOW_H
