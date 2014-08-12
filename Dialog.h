#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "Database.h"

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_savePushButton_clicked();

private:
    Ui::Dialog *ui;
    Database m_database;
};

#endif // DIALOG_H
