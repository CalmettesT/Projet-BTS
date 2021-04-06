#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qledlabel.h"
#include "QMessageBox"
#include "QString"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox_ModeParc->addItem("Gravitaire");
    ui->comboBox_ModeParc->addItem("Mixte");
    ui->comboBox_ModeParc->addItem("Circuit Ferme");
    //connect(pompe,SIGNAL(setStyleSheet()),this,SLOT(couleurPompe()));
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::on_Supervision_clicked()
{
    Supervision supervision;
    supervision.setModal(true);
    supervision.exec();
}

//***********************************************Changer couleur pompe************************************************
void MainWindow::on_ValiderDebit_clicked()
{
    QString d= ui->lineDebit->text();
    debit2 = d.toInt();
    pompe.setDebit2(debit2);
    pompe.couleurPompe(*ui->ledPompe1);
    qDebug() << "Debit :" << debit2;
}

void MainWindow::on_validerMode_clicked()
{
    modeParc2 = ui->comboBox_ModeParc->currentText();
    pompe.setModeParc(modeParc2);
    pompe.couleurPompe(*ui->ledPompe1);
    qDebug()<<"Mode Parc :"<<modeParc2;
}

QString MainWindow::recupModeParc(QString modeParc2)
{
    modeParc2 = ui->comboBox_ModeParc->currentText();
    return modeParc2;
}

void MainWindow::couleurPompe()
{
    qDebug()<<"changement de couleur";
}

//***********************************************INTEGRATION AGENDA************************************************

void MainWindow::on_agenda_clicked()
{
    InterfaceAgenda a;
    a.setModal(true);
    a.exec();
}


void MainWindow::on_ArreterTapis_clicked()
{
    QString t = ui->ArreterTapis->text();
    //Bouton change couleur et ecrit
    if(t=="Arreter Tapis")
    {
        ui->ArreterTapis->setText("Lancer Tapis");
        ui->ArreterTapis->setStyleSheet("QPushButton { background-color: red; border: 2px solid #A52109; color: rgb(255, 255, 255);border-radius: 7px; font: 75 12pt 'Arial'; }");
        QMessageBox::about(this,"Etat Du Tapis","Le Tapis a ete Arrete");
    }
    else
    {
        ui->ArreterTapis->setText("Arreter Tapis");
        ui->ArreterTapis->setStyleSheet("QPushButton { background-color: green; border: 2px solid #46BB1B; color: rgb(255, 255, 255);border-radius: 7px;font: 75 12pt 'Arial';}");
        QMessageBox::about(this,"Etat Du Tapis","Le Tapis a ete Lance");
    }
}
