#include "ajouter.h"
#include "ui_ajouter.h"
#include <QDebug>
#include <QFile>
#include <QXmlStreamWriter>


ajouter::ajouter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouter)
{
    ui->setupUi(this);
    ui->dateDepart->setDate(QDate::currentDate());
    ui->dateArrivee->setDate(QDate::currentDate());
    ui->heureArrivee->setTime(QTime::currentTime());
    ui->heureDepart->setTime(QTime::currentTime());
    ui->type->addItem("debutant");
    ui->type->addItem("confirme");
}

ajouter::~ajouter()
{
    delete ui;
}

void ajouter::on_btnAjouter_clicked()
{
    QDate dateArrivee = ui->dateArrivee->date();
    QDate dateDepart = ui->dateDepart->date();
    QTime heureDepart = ui->heureDepart->time();
    QTime heureArrivee = ui->heureArrivee->time();
    QString type = ui->type->currentText();

    xml.openFile("C:/Users/Christian GROS/Documents/Code/InterfaceAgenda/xml/test3.xml");
    xml.newSeance(dateArrivee.toString(), dateDepart.toString(), heureDepart.toString(), heureArrivee.toString(), type);

    cTest.Connect();



}
