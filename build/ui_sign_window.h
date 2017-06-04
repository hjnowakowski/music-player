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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLineEdit *lineEdit_newusername;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_newpassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QSpinBox *spinBox_age;
    QLabel *label_status;
    QPushButton *pushButton_signin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signingWindow)
    {
        if (signingWindow->objectName().isEmpty())
            signingWindow->setObjectName(QStringLiteral("signingWindow"));
        signingWindow->resize(535, 411);
        centralwidget = new QWidget(signingWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout->addWidget(label_1);

        lineEdit_newusername = new QLineEdit(groupBox);
        lineEdit_newusername->setObjectName(QStringLiteral("lineEdit_newusername"));

        horizontalLayout->addWidget(lineEdit_newusername);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_newpassword = new QLineEdit(groupBox);
        lineEdit_newpassword->setObjectName(QStringLiteral("lineEdit_newpassword"));
        lineEdit_newpassword->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_newpassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_newpassword);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        lineEdit_name = new QLineEdit(groupBox);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_3->addWidget(lineEdit_name);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        spinBox_age = new QSpinBox(groupBox);
        spinBox_age->setObjectName(QStringLiteral("spinBox_age"));
        spinBox_age->setMaximum(150);

        horizontalLayout_4->addWidget(spinBox_age);


        gridLayout_2->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        label_status = new QLabel(groupBox);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setFrameShape(QFrame::Box);
        label_status->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(label_status, 5, 0, 1, 3);

        pushButton_signin = new QPushButton(groupBox);
        pushButton_signin->setObjectName(QStringLiteral("pushButton_signin"));

        gridLayout_2->addWidget(pushButton_signin, 6, 1, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        signingWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signingWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 535, 22));
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
        label_1->setText(QApplication::translate("signingWindow", "username   ", Q_NULLPTR));
        label_2->setText(QApplication::translate("signingWindow", "password   ", Q_NULLPTR));
        label_9->setText(QApplication::translate("signingWindow", "Your name:", Q_NULLPTR));
        label_10->setText(QApplication::translate("signingWindow", "age:", Q_NULLPTR));
        label_status->setText(QApplication::translate("signingWindow", "[+]Status", Q_NULLPTR));
        pushButton_signin->setText(QApplication::translate("signingWindow", "Create new user", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signingWindow: public Ui_signingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_WINDOW_H
