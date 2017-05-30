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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player_window
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QSlider *horizontalSlider_progress;
    QSlider *horizontalSlider_volume;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *player_window)
    {
        if (player_window->objectName().isEmpty())
            player_window->setObjectName(QStringLiteral("player_window"));
        player_window->resize(800, 600);
        centralwidget = new QWidget(player_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(460, 50, 321, 271));
        horizontalSlider_progress = new QSlider(groupBox);
        horizontalSlider_progress->setObjectName(QStringLiteral("horizontalSlider_progress"));
        horizontalSlider_progress->setGeometry(QRect(120, 80, 160, 16));
        horizontalSlider_progress->setOrientation(Qt::Horizontal);
        horizontalSlider_volume = new QSlider(groupBox);
        horizontalSlider_volume->setObjectName(QStringLiteral("horizontalSlider_volume"));
        horizontalSlider_volume->setGeometry(QRect(120, 120, 160, 16));
        horizontalSlider_volume->setValue(99);
        horizontalSlider_volume->setOrientation(Qt::Horizontal);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 60, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 60, 16));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 223, 168, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(240, 90, 211, 261));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 80, 201, 281));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 410, 80, 24));
        player_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(player_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        player_window->setMenuBar(menubar);
        statusbar = new QStatusBar(player_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        player_window->setStatusBar(statusbar);

        retranslateUi(player_window);

        QMetaObject::connectSlotsByName(player_window);
    } // setupUi

    void retranslateUi(QMainWindow *player_window)
    {
        player_window->setWindowTitle(QApplication::translate("player_window", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("player_window", "GroupBox", Q_NULLPTR));
        label->setText(QApplication::translate("player_window", "Progress", Q_NULLPTR));
        label_2->setText(QApplication::translate("player_window", "Volume", Q_NULLPTR));
        pushButton->setText(QApplication::translate("player_window", "Start", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("player_window", "Stop", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("player_window", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class player_window: public Ui_player_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_WINDOW_H
