#ifndef INTERFACEAGENDA_H
#define INTERFACEAGENDA_H

#include <QDialog>
#include "gestionlog.h"

namespace Ui {
class InterfaceAgenda;
}

class InterfaceAgenda : public QDialog
{
    Q_OBJECT

public:
    explicit InterfaceAgenda(QWidget *parent = nullptr);
    ~InterfaceAgenda();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::InterfaceAgenda *ui;
};

#endif // INTERFACEAGENDA_H
