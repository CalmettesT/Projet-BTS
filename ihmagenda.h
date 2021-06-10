#ifndef IHMAGENDA_H
#define IHMAGENDA_H

#include <QDialog>
#include <QDebug>
#include "ajouter.h"
#include "editseance.h"
#include "supseance.h"
#include "gestionxml.h"

namespace Ui {
class ihmAgenda;
}

class ihmAgenda : public QDialog
{
    Q_OBJECT

public:
    explicit ihmAgenda(QWidget *parent = nullptr);
    ~ihmAgenda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ihmAgenda *ui;
};

#endif // IHMAGENDA_H
