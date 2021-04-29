#include "capteur.h"
#include "ui_capteur.h"

GestionLog logCapteur;

Capteur::Capteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Capteur)
{
    ui->setupUi(this);
    logCapteur.ajoutLog("Ouverture des informations des capteurs\n");
}

Capteur::~Capteur()
{
    delete ui;
    logCapteur.ajoutLog("Fermeture des informations des capteurs\n");
}
