/********************************************************************************
** Form generated from reading UI file 'drag_n_drop.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAG_N_DROP_H
#define UI_DRAG_N_DROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drag_n_drop
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_open;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_delete;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *drag_n_drop)
    {
        if (drag_n_drop->objectName().isEmpty())
            drag_n_drop->setObjectName(QStringLiteral("drag_n_drop"));
        drag_n_drop->resize(333, 357);
        centralwidget = new QWidget(drag_n_drop);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout_2->addWidget(lineEdit_name);

        pushButton_open = new QPushButton(centralwidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout_2->addWidget(pushButton_open);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout->addWidget(pushButton_delete);


        verticalLayout->addLayout(horizontalLayout);

        drag_n_drop->setCentralWidget(centralwidget);
        menubar = new QMenuBar(drag_n_drop);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 333, 22));
        drag_n_drop->setMenuBar(menubar);
        statusbar = new QStatusBar(drag_n_drop);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        drag_n_drop->setStatusBar(statusbar);

        retranslateUi(drag_n_drop);

        QMetaObject::connectSlotsByName(drag_n_drop);
    } // setupUi

    void retranslateUi(QMainWindow *drag_n_drop)
    {
        drag_n_drop->setWindowTitle(QApplication::translate("drag_n_drop", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("drag_n_drop", "Name:", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("drag_n_drop", "Open", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("drag_n_drop", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class drag_n_drop: public Ui_drag_n_drop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAG_N_DROP_H
