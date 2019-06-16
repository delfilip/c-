/********************************************************************************
** Form generated from reading UI file 'customerservicewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERSERVICEWINDOW_H
#define UI_CUSTOMERSERVICEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CustomerServiceWindow
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QSpinBox *IDSetter;
    QLabel *label_2;
    QTextEdit *ServiceDisplay;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *CustomerServiceWindow)
    {
        if (CustomerServiceWindow->objectName().isEmpty())
            CustomerServiceWindow->setObjectName(QString::fromUtf8("CustomerServiceWindow"));
        CustomerServiceWindow->resize(400, 300);
        gridLayout = new QGridLayout(CustomerServiceWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(CustomerServiceWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 8, 0, 1, 1);

        comboBox = new QComboBox(CustomerServiceWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        IDSetter = new QSpinBox(CustomerServiceWindow);
        IDSetter->setObjectName(QString::fromUtf8("IDSetter"));

        gridLayout->addWidget(IDSetter, 6, 0, 1, 1);

        label_2 = new QLabel(CustomerServiceWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        ServiceDisplay = new QTextEdit(CustomerServiceWindow);
        ServiceDisplay->setObjectName(QString::fromUtf8("ServiceDisplay"));

        gridLayout->addWidget(ServiceDisplay, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(CustomerServiceWindow);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 4, 0, 1, 1);

        label = new QLabel(CustomerServiceWindow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_3 = new QLabel(CustomerServiceWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);


        retranslateUi(CustomerServiceWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), CustomerServiceWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CustomerServiceWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomerServiceWindow);
    } // setupUi

    void retranslateUi(QDialog *CustomerServiceWindow)
    {
        CustomerServiceWindow->setWindowTitle(QApplication::translate("CustomerServiceWindow", "Dialog", nullptr));
        label_2->setText(QApplication::translate("CustomerServiceWindow", "ID of customer:", nullptr));
        label->setText(QApplication::translate("CustomerServiceWindow", "Book title:", nullptr));
        label_3->setText(QApplication::translate("CustomerServiceWindow", "Music Album title:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerServiceWindow: public Ui_CustomerServiceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERSERVICEWINDOW_H
