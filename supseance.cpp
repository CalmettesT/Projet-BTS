#include "supseance.h"
#include "ui_supseance.h"

supSeance::supSeance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::supSeance)
{
    ui->setupUi(this);
}

supSeance::~supSeance()
{
    delete ui;
}

void supSeance::on_pushButton_clicked()
{
    int a = xml.getId();
    qDebug()<<a;
    qDebug()<<QString::number(a);
    xml.supElement("seance", QString::number(a));
}


void supSeance::on_calendarWidget_clicked(const QDate &date)
{
    xml.openFile("C:/Users/Christian GROS/Desktop/xmlClass/test3.xml");
    dateClicked = date.toString();
    xml.setId(date.toString());
    qDebug()<<xml.getId();
}
