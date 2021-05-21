#include "ajouter.h"
#include "ui_ajouter.h"
#include <QDebug>
#include <QFile>
#include <QXmlStreamWriter>

GestionLog logAgendaAjout;
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

    logAgendaAjout.ajoutLog("Ouverture de la fenetre d'ajout dans agenda\n");
}

ajouter::~ajouter()
{
    delete ui;

    logAgendaAjout.ajoutLog("Fermeture de la fenetre d'ajout dans agenda\n");
}

void ajouter::on_pushButton_clicked()
{
    QDate dateArrivee = ui->dateArrivee->date();
    QDate dateDepart = ui->dateDepart->date();
    QTime heureDepart = ui->heureDepart->time();
    QTime heureArrivee = ui->heureArrivee->time();
    QString type = ui->type->currentText();

    cTest.Connect();
    xml.openFile("/Users/calmettesthomas/BTS/Projet-Bts/xml/test3.xml");

    xml.newSeance(dateArrivee.toString(), dateDepart.toString(), heureDepart.toString(), heureArrivee.toString(), type);

    logAgendaAjout.ajoutLog("Ajout d'une nouvelle séance\n");
}
