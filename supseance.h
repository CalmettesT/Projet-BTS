#ifndef SUPSEANCE_H
#define SUPSEANCE_H

#include <QDialog>
#include "gestionxml.h"

namespace Ui {
class supSeance;
}

class supSeance : public QDialog
{
    Q_OBJECT

public:
    explicit supSeance(QWidget *parent = nullptr);
    ~supSeance();

private slots:
    void on_btnSup_clicked();

    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::supSeance *ui;
    gestionXml xml;
    QString dateClicked;
};

#endif // SUPSEANCE_H
