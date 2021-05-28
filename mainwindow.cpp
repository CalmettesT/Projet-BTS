#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qledlabel.h"
#include "QMessageBox"
#include "QString"


GestionLog logMainWindow;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    logMainWindow.ajoutLog("Lancement de l'application \n");
    ui->setupUi(this);
    ui->comboBox_ModeParc->addItem("Gravitaire");
    ui->comboBox_ModeParc->addItem("Mixte");
    ui->comboBox_ModeParc->addItem("Circuit Ferme");
}

MainWindow::~MainWindow()
{
    delete ui;
    logMainWindow.ajoutLog("Fermeture de l'application \n\n");
}

//***********************************************BOUTON DES VANNES************************************************
void MainWindow::on_BoutonVanne1_clicked()
{
    QMessageBox::about(this,"Vanne 1","Information Vanne 1 : \n Ouverutre Vanne :");
}

void MainWindow::on_BoutonVanne2_clicked()
{
    QMessageBox::about(this,"Vanne 2","Information Vanne 2 : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne3_clicked()
{
    QMessageBox::about(this,"Vanne 3","Information Vanne 3 : \n Ouverutre Vanne : ");
}

void MainWindow::on_BoutonVanne4_clicked()
{
    QMessageBox::about(this,"Vanne 4","Information Vanne 4 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne5_clicked()
{
    QMessageBox::about(this,"Vanne 5","Information Vanne 5 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne6_clicked()
{
    QMessageBox::about(this,"Vanne 6","Information Vanne 6 : \n Ouverutre Vanne : \n");
}

void MainWindow::on_BoutonVanne7_clicked()
{
    QMessageBox::about(this,"Vanne 7","Information Vanne 7 : \n Ouverutre Vanne : \n");
}

//***********************************************OUVRIR SUPERVISION************************************************

void MainWindow::on_Supervision_clicked()
{
    Supervision supervision;
    supervision.exec();
}

//***********************************************Gestion Tapis************************************************

void MainWindow::on_ArreterTapis_clicked()
{
    QString t = ui->ArreterTapis->text();
    //Bouton change couleur et ecrit
    if(t=="Arreter Tapis")
    {
        ui->ArreterTapis->setText("Lancer Tapis");
        ui->ArreterTapis->setStyleSheet("QPushButton { background-color: red; border: 2px solid #A52109; color: rgb(255, 255, 255);border-radius: 7px; font: 75 12pt 'Arial'; }");
        QMessageBox::about(this,"Etat Du Tapis","Le Tapis a ete Arrete");
        //ajout dans log
        logMainWindow.ajoutLog("Arret du tapis\n");
    }
    else
    {
        ui->ArreterTapis->setText("Arreter Tapis");
        ui->ArreterTapis->setStyleSheet("QPushButton { background-color: green; border: 2px solid #46BB1B; color: rgb(255, 255, 255);border-radius: 7px;font: 75 12pt 'Arial';}");
        QMessageBox::about(this,"Etat Du Tapis","Le Tapis a ete Lance");
        //ajout dans log
        logMainWindow.ajoutLog("Lancement du tapis\n");
    }
}

//***********************************************Changer couleur pompe************************************************
void MainWindow::on_ValiderDebit_clicked()
{
    QString d= ui->lineDebit->text();
    debit2 = d.toInt();
    pompe.setDebit2(debit2);
    pompe.couleurPompe(*ui->ledPompe1);
    qDebug() << "Debit :" << debit2;
    //ajout dans log
    logMainWindow.ajoutLog("changement de débit\n");
}

void MainWindow::on_validerMode_clicked()
{
    modeParc2 = ui->comboBox_ModeParc->currentText();
    pompe.setModeParc(modeParc2);
    pompe.couleurPompe(*ui->ledPompe1);
    qDebug()<<"Mode Parc :"<<modeParc2;
    //ajout dans log
    logMainWindow.ajoutLog("changement de mode du parc\n");
}

QString MainWindow::recupModeParc(QString modeParc2)
{
    modeParc2 = ui->comboBox_ModeParc->currentText();
    return modeParc2;
}

//***********************************************INTEGRATION AGENDA************************************************

void MainWindow::on_agenda_clicked()
{
    IHMagenda agenda;
    agenda.setModal(true);
    agenda.exec();
}

//***********************************************Mode auto parc************************************************

void MainWindow::switchAuto(bool mode)
{
    if(mode==true)
    {

    }
    else
    {

    }
}

void MainWindow::on_boutonModeAutoManuel_clicked()
{
    QString m = ui->boutonModeAutoManuel->text();
    //Bouton change couleur et ecrit
    if(m=="Enlever mode Auto")
    {
        ui->ValiderDebit->show();
        ui->validerMode->show();
        ui->comboBox_ModeParc->show();
        ui->boutonModeAutoManuel->setText("Activer mode Auto");
        ui->boutonModeAutoManuel->setStyleSheet("QPushButton { background-color: red; border: 2px solid #A52109; color: rgb(255, 255, 255);border-radius: 7px; font: 75 12pt 'Arial'; }");
        //ajout dans log
        logMainWindow.ajoutLog("Mode auto du parc enlevé\n");
    }
    else
    {
        ui->ValiderDebit->hide();
        ui->validerMode->hide();
        ui->comboBox_ModeParc->hide();
        ui->boutonModeAutoManuel->setText("Enlever mode Auto");
        ui->boutonModeAutoManuel->setStyleSheet("QPushButton { background-color: green; border: 2px solid #46BB1B; color: rgb(255, 255, 255);border-radius: 7px;font: 75 12pt 'Arial';}");
        //ajout dans log
        logMainWindow.ajoutLog("Mode auto du parc activé\n");
    }
}
