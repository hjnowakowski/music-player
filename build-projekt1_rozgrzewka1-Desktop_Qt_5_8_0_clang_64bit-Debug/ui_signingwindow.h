/********************************************************************************
** Form generated from reading UI file 'signingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINGWINDOW_H
#define UI_SIGNINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signingWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_3;
    QPushButton *pushButton_signin;
    QLabel *label_status;
    QLineEdit *lineEdit_name;
    QSpinBox *spinBox_age;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLineEdit *lineEdit_newusername;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newpassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signingWindow)
    {
        if (signingWindow->objectName().isEmpty())
            signingWindow->setObjectName(QStringLiteral("signingWindow"));
        signingWindow->resize(800, 600);
        centralwidget = new QWidget(signingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 50, 341, 481));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 271, 16));
        pushButton_signin = new QPushButton(groupBox);
        pushButton_signin->setObjectName(QStringLiteral("pushButton_signin"));
        pushButton_signin->setGeometry(QRect(80, 380, 161, 41));
        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label"));
        label_status->setGeometry(QRect(20, 440, 201, 16));
        label_status->setFrameShape(QFrame::Box);
        label_status->setFrameShadow(QFrame::Raised);
        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(120, 180, 113, 24));
        spinBox_age = new QSpinBox(groupBox);
        spinBox_age->setObjectName(QStringLiteral("spinBox_age"));
        spinBox_age->setGeometry(QRect(160, 210, 61, 25));
        spinBox_age->setMaximum(150);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 180, 81, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 210, 60, 16));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 110, 251, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(widget);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout->addWidget(label_1);

        lineEdit_newusername = new QLineEdit(widget);
        lineEdit_newusername->setObjectName(QStringLiteral("lineEdit_newusername"));

        horizontalLayout->addWidget(lineEdit_newusername);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(30, 150, 251, 26));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newpassword = new QLineEdit(widget1);
        lineEdit_newpassword->setObjectName(QStringLiteral("lineEdit_newpassword"));

        horizontalLayout_2->addWidget(lineEdit_newpassword);

        signingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signingWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        signingWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(signingWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        signingWindow->setStatusBar(statusbar);

        retranslateUi(signingWindow);

        QMetaObject::connectSlotsByName(signingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *signingWindow)
    {
        signingWindow->setWindowTitle(QApplication::translate("signingWindow", "Sign in window", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("signingWindow", "Sign in:", Q_NULLPTR));
        label_3->setText(QApplication::translate("signingWindow", "Enter new username and password below:", Q_NULLPTR));
        pushButton_signin->setText(QApplication::translate("signingWindow", "Create new user", Q_NULLPTR));
        label_status->setText(QApplication::translate("signingWindow", "[+]Status", Q_NULLPTR));
        label_9->setText(QApplication::translate("signingWindow", "You name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("signingWindow", "age:", Q_NULLPTR));
        label_1->setText(QApplication::translate("signingWindow", "username", Q_NULLPTR));
        label_2->setText(QApplication::translate("signingWindow", "password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signingWindow: public Ui_signingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINGWINDOW_H
