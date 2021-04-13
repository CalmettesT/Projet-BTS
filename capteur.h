#ifndef CAPTEUR_H
#define CAPTEUR_H

#include <QDialog>

namespace Ui {
class Capteur;
}

class Capteur : public QDialog
{
    Q_OBJECT

public:
    explicit Capteur(QWidget *parent = nullptr);
    ~Capteur();

private:
    Ui::Capteur *ui;
};

#endif // CAPTEUR_H
