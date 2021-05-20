#ifndef AJOUTER_H
#define AJOUTER_H

#include <QDialog>
#include "gestionxml.h"
#include "sockettest.h"

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
    SocketTest cTest;
};

#endif // AJOUTER_H
