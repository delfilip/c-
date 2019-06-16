/********************************************************************************
** Form generated from reading UI file 'customerpopupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERPOPUPWINDOW_H
#define UI_CUSTOMERPOPUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CustomerPopUpWindow
{
public:
    QGridLayout *gridLayout;
    QLineEdit *LastNameGet;
    QLabel *label;
    QLineEdit *FirstNameGet;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;

    void setupUi(QDialog *CustomerPopUpWindow)
    {
        if (CustomerPopUpWindow->objectName().isEmpty())
            CustomerPopUpWindow->setObjectName(QString::fromUtf8("CustomerPopUpWindow"));
        CustomerPopUpWindow->resize(400, 300);
        gridLayout = new QGridLayout(CustomerPopUpWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LastNameGet = new QLineEdit(CustomerPopUpWindow);
        LastNameGet->setObjectName(QString::fromUtf8("LastNameGet"));

        gridLayout->addWidget(LastNameGet, 4, 0, 1, 1);

        label = new QLabel(CustomerPopUpWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        FirstNameGet = new QLineEdit(CustomerPopUpWindow);
        FirstNameGet->setObjectName(QString::fromUtf8("FirstNameGet"));

        gridLayout->addWidget(FirstNameGet, 2, 0, 1, 1);

        label_2 = new QLabel(CustomerPopUpWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CustomerPopUpWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 1);

        label_3 = new QLabel(CustomerPopUpWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);


        retranslateUi(CustomerPopUpWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomerPopUpWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomerPopUpWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomerPopUpWindow);
    } // setupUi

    void retranslateUi(QDialog *CustomerPopUpWindow)
    {
        CustomerPopUpWindow->setWindowTitle(QApplication::translate("CustomerPopUpWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("CustomerPopUpWindow", "First name", nullptr));
        label_2->setText(QApplication::translate("CustomerPopUpWindow", "Last name", nullptr));
        label_3->setText(QApplication::translate("CustomerPopUpWindow", "Type first and last customer's name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerPopUpWindow: public Ui_CustomerPopUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPOPUPWINDOW_H
