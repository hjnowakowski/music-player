/********************************************************************************
** Form generated from reading UI file 'dragndrop.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAGNDROP_H
#define UI_DRAGNDROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dragndrop
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_open;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_delete;

    void setupUi(QWidget *dragndrop)
    {
        if (dragndrop->objectName().isEmpty())
            dragndrop->setObjectName(QStringLiteral("dragndrop"));
        dragndrop->resize(447, 498);
        verticalLayout = new QVBoxLayout(dragndrop);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(dragndrop);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(dragndrop);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);

        pushButton_open = new QPushButton(dragndrop);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        horizontalLayout->addWidget(pushButton_open);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(dragndrop);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_delete = new QPushButton(dragndrop);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout_2->addWidget(pushButton_delete);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(dragndrop);

        QMetaObject::connectSlotsByName(dragndrop);
    } // setupUi

    void retranslateUi(QWidget *dragndrop)
    {
        dragndrop->setWindowTitle(QApplication::translate("dragndrop", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("dragndrop", "Name:", Q_NULLPTR));
        pushButton_open->setText(QApplication::translate("dragndrop", "open", Q_NULLPTR));
        pushButton_delete->setText(QApplication::translate("dragndrop", "delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dragndrop: public Ui_dragndrop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAGNDROP_H
