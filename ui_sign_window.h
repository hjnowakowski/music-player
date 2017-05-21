/********************************************************************************
** Form generated from reading UI file 'sign_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_WINDOW_H
#define UI_SIGN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signingWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QLabel *label_3;
    QPushButton *pushButton_signin;
    QLabel *label_status;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLineEdit *lineEdit_newusername;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newpassword;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_name;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox_age;
    QDateEdit *dateEdit_userbirth;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signingWindow)
    {
        if (signingWindow->objectName().isEmpty())
            signingWindow->setObjectName(QStringLiteral("signingWindow"));
        signingWindow->resize(800, 600);
        centralwidget = new QWidget(signingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 80, 271, 16));
        pushButton_signin = new QPushButton(groupBox);
        pushButton_signin->setObjectName(QStringLiteral("pushButton_signin"));
        pushButton_signin->setGeometry(QRect(540, 420, 161, 41));
        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 510, 461, 16));
        label_status->setFrameShape(QFrame::Box);
        label_status->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 110, 251, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(layoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout->addWidget(label_1);

        lineEdit_newusername = new QLineEdit(layoutWidget);
        lineEdit_newusername->setObjectName(QStringLiteral("lineEdit_newusername"));

        horizontalLayout->addWidget(lineEdit_newusername);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 150, 251, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newpassword = new QLineEdit(layoutWidget1);
        lineEdit_newpassword->setObjectName(QStringLiteral("lineEdit_newpassword"));

        horizontalLayout_2->addWidget(lineEdit_newpassword);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 180, 198, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_name = new QLineEdit(layoutWidget2);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_3->addWidget(lineEdit_name);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 210, 89, 27));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        spinBox_age = new QSpinBox(layoutWidget3);
        spinBox_age->setObjectName(QStringLiteral("spinBox_age"));
        spinBox_age->setMaximum(150);

        horizontalLayout_4->addWidget(spinBox_age);

        dateEdit_userbirth = new QDateEdit(groupBox);
        dateEdit_userbirth->setObjectName(QStringLiteral("dateEdit_userbirth"));
        dateEdit_userbirth->setGeometry(QRect(460, 160, 161, 41));
        dateEdit_userbirth->setCalendarPopup(true);

        verticalLayout->addWidget(groupBox);

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
        label_1->setText(QApplication::translate("signingWindow", "username", Q_NULLPTR));
        label_2->setText(QApplication::translate("signingWindow", "password", Q_NULLPTR));
        label_9->setText(QApplication::translate("signingWindow", "You name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("signingWindow", "age:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signingWindow: public Ui_signingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_WINDOW_H
