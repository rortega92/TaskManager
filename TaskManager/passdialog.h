#ifndef PASSDIALOG_H
#define PASSDIALOG_H

#include <QDialog>

namespace Ui {
class passDialog;
}

class passDialog : public QDialog
{
    Q_OBJECT

public:
    explicit passDialog(QWidget *parent = 0);
    QString getPass();
    ~passDialog();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::passDialog *ui;
    QString pass;

};

#endif // PASSDIALOG_H
