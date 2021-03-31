#ifndef AJOUTER_H
#define AJOUTER_H

#include <QDialog>
#include "gestionxml.h"

namespace Ui {
class ajouter;
}

class ajouter : public QDialog
{
    Q_OBJECT

public:
    explicit ajouter(QWidget *parent = nullptr);
    ~ajouter();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ajouter *ui;
    gestionXml xml;
};

#endif // AJOUTER_H
