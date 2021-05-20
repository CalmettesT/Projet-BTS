#include "editseance.h"
#include "ui_editseance.h"
#include <QDebug>
#include <QFile>

editSeance::editSeance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editSeance)
{
    ui->setupUi(this);

    QDate calDate = ui->calendarWidget->selectedDate();

    ui->dateDepart->setDate(calDate);
    ui->dateArrivee->setDate(calDate);
    ui->heureDepart->setTime(QTime::currentTime());
    ui->heureArrivee->setTime(QTime::currentTime());
    ui->type->addItem("debutant");
    ui->type->addItem("confirme");

        //on donne l'image au label

        ui->labelimg->setPixmap(QPixmap("C:/Users/Christian GROS/Desktop/agendaInterface-20210129T071652Z-001/agendaInterface/img/noir"));

}

editSeance::~editSeance()
{
    delete ui;
}

void editSeance::on_pushButton_clicked()
{
    QDate dateArrivee = ui->dateArrivee->date();
    QDate dateDepart = ui->dateDepart->date();
    QTime heureDepart = ui->heureDepart->time();
    QTime heureArrivee = ui->heureArrivee->time();
    QString type = ui->type->currentText();

//    qDebug()<<"dateArrivee:"<<dateArrivee.toString();
//    qDebug()<<"dateDepart:"<<dateDepart.toString();
//    qDebug()<<"heureArrivee:"<<heureArrivee.toString();
//    qDebug()<<"heureDepart:"<<heureDepart.toString();

//    xml.readElement("dateArrivee");

//    xml.modElement(dateArrivee.toString(), dateDepart.toString(), heureDepart.toString(), heureArrivee.toString(), type);
}

void editSeance::on_calendarWidget_clicked(const QDate &date)
{
    ui->lineEdit->setText(date.toString());

    xml.openFile("C:/Users/Christian GROS/Documents/xmlClass/test3.xml");
    xml.readElement(date.toString());
//    xml.setId(date.toString());
//    qDebug()<<xml.getId();
}

