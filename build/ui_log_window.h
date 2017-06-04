/********************************************************************************
** Form generated from reading UI file 'log_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_WINDOW_H
#define UI_LOG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Quit;
    QLabel *label_status;
    QLabel *label_data;
    QPushButton *pushButton;
    QPushButton *pushButton_Login;
    QLineEdit *lineEdit_username;
    QLabel *label_username;
    QLabel *label_passwd;
    QLineEdit *lineEdit_password;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(465, 373);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Quit = new QPushButton(centralWidget);
        Quit->setObjectName(QStringLiteral("Quit"));
        Quit->setGeometry(QRect(350, 270, 91, 31));
        Quit->setCursor(QCursor(Qt::ArrowCursor));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(20, 200, 321, 21));
        label_status->setFrameShape(QFrame::Box);
        label_status->setFrameShadow(QFrame::Raised);
        label_data = new QLabel(centralWidget);
        label_data->setObjectName(QStringLiteral("label_data"));
        label_data->setGeometry(QRect(20, 180, 251, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 270, 81, 31));
        pushButton_Login = new QPushButton(centralWidget);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(160, 270, 91, 31));
        pushButton_Login->setMouseTracking(false);
        pushButton_Login->setAutoFillBackground(false);
        pushButton_Login->setCheckable(false);
        lineEdit_username = new QLineEdit(centralWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(170, 60, 131, 24));
        label_username = new QLabel(centralWidget);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(60, 60, 71, 21));
        label_passwd = new QLabel(centralWidget);
        label_passwd->setObjectName(QStringLiteral("label_passwd"));
        label_passwd->setGeometry(QRect(60, 100, 71, 21));
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(170, 100, 131, 24));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 465, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(Quit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Quit->setText(QApplication::translate("MainWindow", "Zako\305\204cz", Q_NULLPTR));
        label_status->setText(QApplication::translate("MainWindow", "[+]Status", Q_NULLPTR));
        label_data->setText(QApplication::translate("MainWindow", "data", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "back", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        lineEdit_username->setText(QString());
        label_username->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        label_passwd->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_WINDOW_H
