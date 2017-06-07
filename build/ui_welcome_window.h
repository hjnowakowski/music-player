/********************************************************************************
** Form generated from reading UI file 'welcome_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_WINDOW_H
#define UI_WELCOME_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome_window
{
public:
    QWidget *centralwidget;
    QLabel *label_welcome;
    QGroupBox *groupBox;
    QPushButton *button_login;
    QPushButton *button_signin;
    QPushButton *Quit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome_window)
    {
        if (welcome_window->objectName().isEmpty())
            welcome_window->setObjectName(QStringLiteral("welcome_window"));
        welcome_window->resize(796, 563);
        welcome_window->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(welcome_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        label_welcome->setGeometry(QRect(10, 20, 371, 511));
        QFont font;
        font.setPointSize(49);
        label_welcome->setFont(font);
        label_welcome->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(410, 50, 371, 461));
        button_login = new QPushButton(groupBox);
        button_login->setObjectName(QStringLiteral("button_login"));
        button_login->setGeometry(QRect(40, 70, 121, 61));
        button_login->setStyleSheet(QLatin1String("color: rgb(76, 76, 76);\n"
"color: rgb(0, 0, 0);"));
        button_signin = new QPushButton(groupBox);
        button_signin->setObjectName(QStringLiteral("button_signin"));
        button_signin->setGeometry(QRect(220, 70, 121, 61));
        button_signin->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        Quit = new QPushButton(groupBox);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(270, 480, 91, 31));
        Quit->setCursor(QCursor(Qt::ArrowCursor));
        Quit->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 330, 80, 24));
        button_login->raise();
        button_signin->raise();
        Quit->raise();
        pushButton->raise();
        label_welcome->raise();
        welcome_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 796, 22));
        welcome_window->setMenuBar(menubar);
        statusbar = new QStatusBar(welcome_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        welcome_window->setStatusBar(statusbar);

        retranslateUi(welcome_window);

        QMetaObject::connectSlotsByName(welcome_window);
    } // setupUi

    void retranslateUi(QMainWindow *welcome_window)
    {
        welcome_window->setWindowTitle(QApplication::translate("welcome_window", "Welcome window | Music Player", Q_NULLPTR));
        label_welcome->setText(QApplication::translate("welcome_window", "<html><head/><body><p align=\"center\">Witamy!</p><p align=\"center\"><span style=\" font-size:18pt;\">Mo\305\274e muzyk\304\231 nastawi\304\207?</span></p><p align=\"center\"><br/></p><p align=\"center\"><span style=\" font-size:12pt;\">Zaloguj si\304\231 lub zarejestruj, \305\274eby przej\305\233\304\207 dalej.</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QString());
        button_login->setText(QApplication::translate("welcome_window", "logowanie", Q_NULLPTR));
        button_signin->setText(QApplication::translate("welcome_window", "rejestracja", Q_NULLPTR));
        Quit->setText(QApplication::translate("welcome_window", "Zako\305\204cz", Q_NULLPTR));
        pushButton->setText(QApplication::translate("welcome_window", "player, test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class welcome_window: public Ui_welcome_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_WINDOW_H
