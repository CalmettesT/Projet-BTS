#ifndef IHMAGENDA_H
#define IHMAGENDA_H
#include "ajouter.h"
#include"editseance.h"
#include"supseance.h"
#include"QDebug"
#include <QDialog>

namespace Ui {
class IHMagenda;
}

class IHMagenda : public QDialog
{
    Q_OBJECT

public:
    explicit IHMagenda(QWidget *parent = nullptr);
    ~IHMagenda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::IHMagenda *ui;
};

#endif // IHMAGENDA_H
