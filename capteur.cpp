#include "capteur.h"
#include "ui_capteur.h"

Capteur::Capteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Capteur)
{
    ui->setupUi(this);
}

Capteur::~Capteur()
{
    delete ui;
}
