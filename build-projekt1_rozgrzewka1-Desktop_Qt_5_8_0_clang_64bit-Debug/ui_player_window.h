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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player_window
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *player_window)
    {
        if (player_window->objectName().isEmpty())
            player_window->setObjectName(QStringLiteral("player_window"));
        player_window->resize(800, 600);
        menubar = new QMenuBar(player_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        player_window->setMenuBar(menubar);
        centralwidget = new QWidget(player_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        player_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(player_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        player_window->setStatusBar(statusbar);

        retranslateUi(player_window);

        QMetaObject::connectSlotsByName(player_window);
    } // setupUi

    void retranslateUi(QMainWindow *player_window)
    {
        player_window->setWindowTitle(QApplication::translate("player_window", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class player_window: public Ui_player_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_WINDOW_H
