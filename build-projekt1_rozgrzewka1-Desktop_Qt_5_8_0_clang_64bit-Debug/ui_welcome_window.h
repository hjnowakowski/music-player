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
#include <QtWidgets/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
    QLabel *label_welcome;
    QGroupBox *groupBox;
    QPushButton *button_login;
    QPushButton *button_signin;
    QPushButton *Quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome_window)
    {
        if (welcome_window->objectName().isEmpty())
            welcome_window->setObjectName(QStringLiteral("welcome_window"));
        welcome_window->resize(800, 600);
        centralwidget = new QWidget(welcome_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_welcome = new QLabel(centralwidget);
        label_welcome->setObjectName(QStringLiteral("label_welcome"));
        QFont font;
        font.setPointSize(49);
        label_welcome->setFont(font);
        label_welcome->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_welcome);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        button_login = new QPushButton(groupBox);
        button_login->setObjectName(QStringLiteral("button_login"));
        button_login->setGeometry(QRect(60, 70, 80, 24));
        button_signin = new QPushButton(groupBox);
        button_signin->setObjectName(QStringLiteral("button_signin"));
        button_signin->setGeometry(QRect(230, 70, 80, 24));
        Quit = new QPushButton(groupBox);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(270, 480, 91, 31));
        Quit->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout->addWidget(groupBox);

        welcome_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        welcome_window->setMenuBar(menubar);
        statusbar = new QStatusBar(welcome_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        welcome_window->setStatusBar(statusbar);

        retranslateUi(welcome_window);

        QMetaObject::connectSlotsByName(welcome_window);
    } // setupUi

    void retranslateUi(QMainWindow *welcome_window)
    {
        welcome_window->setWindowTitle(QApplication::translate("welcome_window", "Welcome!", Q_NULLPTR));
        label_welcome->setText(QApplication::translate("welcome_window", "Welcome", Q_NULLPTR));
        groupBox->setTitle(QString());
        button_login->setText(QApplication::translate("welcome_window", "log in", Q_NULLPTR));
        button_signin->setText(QApplication::translate("welcome_window", "sign in", Q_NULLPTR));
        Quit->setText(QApplication::translate("welcome_window", "Zako\305\204cz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class welcome_window: public Ui_welcome_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_WINDOW_H
