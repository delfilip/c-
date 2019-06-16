/********************************************************************************
** Form generated from reading UI file 'mpik.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MPIK_H
#define UI_MPIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mpik
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *Customer;
    QPushButton *Statistics;
    QPushButton *ShowBooks;
    QTextEdit *Display;
    QPushButton *AddItem;
    QPushButton *AddMusic;
    QPushButton *ShowClients;
    QPushButton *ShowAlbums;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mpik)
    {
        if (mpik->objectName().isEmpty())
            mpik->setObjectName(QString::fromUtf8("mpik"));
        mpik->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mpik->sizePolicy().hasHeightForWidth());
        mpik->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(mpik);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Customer = new QPushButton(centralWidget);
        Customer->setObjectName(QString::fromUtf8("Customer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Customer->sizePolicy().hasHeightForWidth());
        Customer->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        Customer->setFont(font);
        Customer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Customer, 1, 0, 1, 2);

        Statistics = new QPushButton(centralWidget);
        Statistics->setObjectName(QString::fromUtf8("Statistics"));
        sizePolicy1.setHeightForWidth(Statistics->sizePolicy().hasHeightForWidth());
        Statistics->setSizePolicy(sizePolicy1);
        Statistics->setFont(font);
        Statistics->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Statistics, 5, 1, 1, 1);

        ShowBooks = new QPushButton(centralWidget);
        ShowBooks->setObjectName(QString::fromUtf8("ShowBooks"));
        sizePolicy1.setHeightForWidth(ShowBooks->sizePolicy().hasHeightForWidth());
        ShowBooks->setSizePolicy(sizePolicy1);
        ShowBooks->setFont(font);
        ShowBooks->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ShowBooks, 3, 0, 1, 1);

        Display = new QTextEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Impact"));
        font1.setPointSize(11);
        Display->setFont(font1);
        Display->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: #4a4a4a;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));

        gridLayout->addWidget(Display, 0, 0, 1, 2);

        AddItem = new QPushButton(centralWidget);
        AddItem->setObjectName(QString::fromUtf8("AddItem"));
        sizePolicy1.setHeightForWidth(AddItem->sizePolicy().hasHeightForWidth());
        AddItem->setSizePolicy(sizePolicy1);
        AddItem->setFont(font);
        AddItem->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(AddItem, 3, 1, 1, 1);

        AddMusic = new QPushButton(centralWidget);
        AddMusic->setObjectName(QString::fromUtf8("AddMusic"));
        sizePolicy1.setHeightForWidth(AddMusic->sizePolicy().hasHeightForWidth());
        AddMusic->setSizePolicy(sizePolicy1);
        AddMusic->setFont(font);
        AddMusic->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(AddMusic, 4, 1, 1, 1);

        ShowClients = new QPushButton(centralWidget);
        ShowClients->setObjectName(QString::fromUtf8("ShowClients"));
        sizePolicy1.setHeightForWidth(ShowClients->sizePolicy().hasHeightForWidth());
        ShowClients->setSizePolicy(sizePolicy1);
        ShowClients->setFont(font);
        ShowClients->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ShowClients, 4, 0, 1, 1);

        ShowAlbums = new QPushButton(centralWidget);
        ShowAlbums->setObjectName(QString::fromUtf8("ShowAlbums"));
        sizePolicy1.setHeightForWidth(ShowAlbums->sizePolicy().hasHeightForWidth());
        ShowAlbums->setSizePolicy(sizePolicy1);
        ShowAlbums->setFont(font);
        ShowAlbums->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #ffacd9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(ShowAlbums, 5, 0, 1, 1);

        mpik->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mpik);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        mpik->setMenuBar(menuBar);
        statusBar = new QStatusBar(mpik);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mpik->setStatusBar(statusBar);

        retranslateUi(mpik);

        QMetaObject::connectSlotsByName(mpik);
    } // setupUi

    void retranslateUi(QMainWindow *mpik)
    {
        mpik->setWindowTitle(QApplication::translate("mpik", "mpik", nullptr));
        Customer->setText(QApplication::translate("mpik", "Customer service", nullptr));
        Statistics->setText(QApplication::translate("mpik", "Statistics", nullptr));
        ShowBooks->setText(QApplication::translate("mpik", "Show all books", nullptr));
        AddItem->setText(QApplication::translate("mpik", "Add book", nullptr));
        AddMusic->setText(QApplication::translate("mpik", "Add music album", nullptr));
        ShowClients->setText(QApplication::translate("mpik", "Show all clients", nullptr));
        ShowAlbums->setText(QApplication::translate("mpik", "Show all music albums", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mpik: public Ui_mpik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MPIK_H
