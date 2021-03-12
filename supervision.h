#ifndef SUPERVISION_H
#define SUPERVISION_H
#include <QMessageBox>
#include <QDialog>
#include <QDebug>

namespace Ui {
class Supervision;
}

class Supervision : public QDialog
{
    Q_OBJECT
    
public:
    explicit Supervision(QWidget *parent = 0);
    ~Supervision();
    QString getEtatPompe();
    
private slots:

    void on_BoutonVannes_clicked();

    void on_BoutonPompes_clicked();

    void on_ArreterTapis_clicked();

    void on_BoutonCapteur_clicked();

    void on_boutonModifValeurVanne1_clicked();

    void on_boutonModifVanne2_clicked();

    void on_boutonModifVanne3_clicked();

    void on_boutonModifVanne4_clicked();

    void on_boutonModifVanne5_clicked();

    void on_boutonModifVanne6_clicked();

    void on_boutonModifVanne7_clicked();

    void on_MarchePompe1_clicked();

    void on_MarchePompe2_clicked();

    void on_MarchePompe3_clicked();

    void on_ArretPompe1_clicked();

    void on_ArretPompe2_clicked();

    void on_ArretPompe3_clicked();

private:
    Ui::Supervision *ui;
    QString infoVanne1;
    QString infoVanne2;
    QString infoVanne3;
    QString infoVanne4;
    QString infoVanne5;
    QString infoVanne6;
    QString infoVanne7;
    QString infoCapteur1;
    QString infoCapteur2;
    QString infoCapteur3;
    QString infoCapteur4;
    QString infoCapteur5;
    QString infoCapteur6;
    QString etatP1;
    QString etatP2;
    QString etatP3;
};

#endif // SUPERVISION_H
