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

    //on donne l'image au label

    ui->labelimg->setPixmap(QPixmap("C:/Users/Christian GROS/Desktop/agendaInterface-20210129T071652Z-001/agendaInterface/img/noir"));


}

editSeance::~editSeance()
{
    delete ui;
}

void editSeance::on_btnMod_clicked()
{
    QDate dateArrivee = ui->dateArrivee->date();
    QDate dateDepart = ui->dateDepart->date();
    QTime heureDepart = ui->heureDepart->time();
    QTime heureArrivee = ui->heureArrivee->time();
    QString type = ui->type->currentText();
    xml.modElement(xml,dateArrivee.toString(),dateDepart.toString(),heureDepart.toString(),heureArrivee.toString(),type,6);
}

void editSeance::on_calendarWidget_clicked(const QDate &date)
{
    for (int i = xml.getNumberId();i>=0;i--) {
        ui->seancesJournne->removeItem(i);
    }
    QVector<int> mesIds;
    xml.openFile("C:/Users/Christian GROS/Documents/xmlClass/test3.xml");
    xml.readElement(date.toString());
//    xml.setId(date.toString());
//    qDebug()<<xml.getId();
    ui->lineEdit->setText(date.toString());
    xml.openFile("C:/Users/Christian GROS/Documents/Code/InterfaceAgenda/xml/test3.xml");

    mesIds = xml.idDay(date.toString());
    ui->nombreSeances->setValue(mesIds.length());
    for (int i = mesIds.length();i>=1;i--)
    {
        ui->seancesJournne->addItem(QString::number(i));
    }
}

