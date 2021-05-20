#include "ihmagenda.h"
#include "ui_ihmagenda.h"

IHMagenda::IHMagenda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IHMagenda)
{
    ui->setupUi(this);
}

IHMagenda::~IHMagenda()
{
    delete ui;
}

void IHMagenda::on_pushButton_clicked()
{
    ajouter win2;
    win2.setModal(true);
    win2.exec();
}

void IHMagenda::on_pushButton_2_clicked()
{
    editSeance win3;
    win3.setModal(true);
    win3.exec();
}

void IHMagenda::on_pushButton_4_clicked()
{
    supSeance win4;
    win4.setModal(true);
    win4.exec();

}
