#include "supseance.h"
#include "ui_supseance.h"

GestionLog logAgendaSup;
supSeance::supSeance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supSeance)
{
    ui->setupUi(this);
    logAgendaSup.ajoutLog("Ouverture de la fenetre de suppression seance\n");
}

supSeance::~supSeance()
{
    delete ui;
    logAgendaSup.ajoutLog("Fermeture de la fenetre de supression seance\n");
}

void supSeance::on_pushButton_clicked()
{
    int id = xml.getNumberId();
    QString str;

    xml.supElement(QString::number(id));

    logAgendaSup.ajoutLog("suppression de seance\n");

}


void supSeance::on_calendarWidget_clicked(const QDate &date)
{
    xml.openFile("/Users/calmettesthomas/BTS/Projet-Bts/xml/test3.xml");
    dateClicked = date.toString();

    qDebug()<<dateClicked;

//    xml.readElement()


//    xml.setId(date.toString());
//    qDebug()<<xml.getId();
}
