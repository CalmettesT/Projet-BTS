#ifndef EDITSEANCE_H
#define EDITSEANCE_H

#include <QDialog>
#include "gestionxml.h"

namespace Ui {
class editSeance;
}

class editSeance : public QDialog
{
    Q_OBJECT

public:
    explicit editSeance(QWidget *parent = nullptr);
    ~editSeance();

private slots:
    void on_btnMod_clicked();
    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::editSeance *ui;
    gestionXml xml;
};

#endif // EDITSEANCE_H
