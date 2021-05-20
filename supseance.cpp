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
    int id = xml.getNumberId();
    QString str;

    xml.supElement(QString::number(id));
}


void supSeance::on_calendarWidget_clicked(const QDate &date)
{
    xml.openFile("C:/Users/Christian GROS/Documents/xmlClass/test3.xml");
    dateClicked = date.toString();

    qDebug()<<dateClicked;

//    xml.readElement()


//    xml.setId(date.toString());
//    qDebug()<<xml.getId();
}
