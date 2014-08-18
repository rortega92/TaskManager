/********************************************************************************
** Form generated from reading UI file 'passdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSDIALOG_H
#define UI_PASSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_passDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *passDialog)
    {
        if (passDialog->objectName().isEmpty())
            passDialog->setObjectName(QStringLiteral("passDialog"));
        passDialog->resize(400, 212);
        buttonBox = new QDialogButtonBox(passDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 150, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(passDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 100, 321, 23));
        label = new QLabel(passDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 221, 61));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        retranslateUi(passDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), passDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), passDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(passDialog);
    } // setupUi

    void retranslateUi(QDialog *passDialog)
    {
        passDialog->setWindowTitle(QApplication::translate("passDialog", "Dialog", 0));
        lineEdit->setInputMask(QString());
        label->setText(QApplication::translate("passDialog", "Ingrese su password", 0));
    } // retranslateUi

};

namespace Ui {
    class passDialog: public Ui_passDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSDIALOG_H
