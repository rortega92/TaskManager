#include "passdialog.h"
#include "ui_passdialog.h"

passDialog::passDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passDialog)
{
    ui->setupUi(this);
    ui->lineEdit->setFocus();
    ui->lineEdit->setEchoMode(QLineEdit::Password);
}

passDialog::~passDialog()
{
    delete ui;
}

void passDialog::on_buttonBox_accepted()
{
   this->pass= ui->lineEdit->text();
   ui->lineEdit->setText("");

}

QString passDialog::getPass(){
    return this->pass;
}
