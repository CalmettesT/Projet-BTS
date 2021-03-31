#include "interfaceagenda.h"
#include "ui_interfaceagenda.h"
#include <QDebug>
#include "ajouter.h"
#include "editseance.h"
#include "supseance.h"

InterfaceAgenda::InterfaceAgenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfaceAgenda)
{

}

InterfaceAgenda::~InterfaceAgenda()
{
    delete ui;
}

void InterfaceAgenda::on_pushButton_clicked()
{
    ajouter win2;
    win2.setModal(true);
    win2.exec();
}

void InterfaceAgenda::on_pushButton_2_clicked()
{
    editSeance win3;
    win3.setModal(true);
    win3.exec();
}

void InterfaceAgenda::on_pushButton_4_clicked()
{
    supSeance win4;
    win4.setModal(true);
    win4.exec();
}
