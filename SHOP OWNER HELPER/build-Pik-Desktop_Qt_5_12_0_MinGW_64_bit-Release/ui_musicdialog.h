/********************************************************************************
** Form generated from reading UI file 'musicdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICDIALOG_H
#define UI_MUSICDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_MusicDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *amountBar;
    QLineEdit *priceBar;
    QDialogButtonBox *buttonBox;
    QLineEdit *titleBar;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *MusicDialog)
    {
        if (MusicDialog->objectName().isEmpty())
            MusicDialog->setObjectName(QString::fromUtf8("MusicDialog"));
        MusicDialog->resize(400, 300);
        MusicDialog->setStyleSheet(QString::fromUtf8("QDialog {\n"
"background-color: #ffd5ec\n"
"}\n"
""));
        gridLayout = new QGridLayout(MusicDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(MusicDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        amountBar = new QLineEdit(MusicDialog);
        amountBar->setObjectName(QString::fromUtf8("amountBar"));

        gridLayout->addWidget(amountBar, 4, 0, 1, 1);

        priceBar = new QLineEdit(MusicDialog);
        priceBar->setObjectName(QString::fromUtf8("priceBar"));

        gridLayout->addWidget(priceBar, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MusicDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 7, 0, 1, 1);

        titleBar = new QLineEdit(MusicDialog);
        titleBar->setObjectName(QString::fromUtf8("titleBar"));

        gridLayout->addWidget(titleBar, 1, 0, 1, 1);

        label_3 = new QLabel(MusicDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(MusicDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);


        retranslateUi(MusicDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MusicDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MusicDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(MusicDialog);
    } // setupUi

    void retranslateUi(QDialog *MusicDialog)
    {
        MusicDialog->setWindowTitle(QApplication::translate("MusicDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("MusicDialog", "Title", nullptr));
        label_3->setText(QApplication::translate("MusicDialog", "Price", nullptr));
        label_2->setText(QApplication::translate("MusicDialog", "Amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MusicDialog: public Ui_MusicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICDIALOG_H
