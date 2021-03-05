#include "supervision.h"
#include "ui_supervision.h"


Supervision::Supervision(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Supervision)
{
    infoVanne1 = "cc";
    infoVanne2 = "ca va";
    infoVanne3 = "bien";
    infoVanne4 = "et";
    infoVanne5 = "toi";
    infoVanne6 = "oui";
    infoVanne7 = "moi aussi";
    ui->setupUi(this);
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->EditVanne1->hide();
    ui->EditVanne2->hide();
    ui->EditVanne3->hide();
    ui->EditVanne4->hide();
    ui->EditVanne5->hide();
    ui->EditVanne6->hide();
    ui->EditVanne7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelVanne1->hide();
    ui->labelVanne2->hide();
    ui->labelVanne3->hide();
    ui->labelVanne4->hide();
    ui->labelVanne5->hide();
    ui->labelVanne6->hide();
    ui->labelVanne7->hide();
    ui->labelvanne->hide();
    ui->videV->hide();
    ui->label->hide();
    ui->nivEauCap1->hide();
    ui->nivEauCap2->hide();
    ui->nivEauCap3->hide();
    ui->nivEauCap4->hide();
    ui->nivEauCap5->hide();
    ui->nivEauCap6->hide();
    ui->labelCapteur1->hide();
    ui->labelCapteur2->hide();
    ui->labelCapteur3->hide();
    ui->labelCapteur4->hide();
    ui->labelCapteur5->hide();
    ui->labelCapteur6->hide();
    ui->labelInfoCapteur->hide();
    ui->EditVanne1->setText(infoVanne1);
    ui->EditVanne2->setText(infoVanne2);
    ui->EditVanne3->setText(infoVanne3);
    ui->EditVanne4->setText(infoVanne4);
    ui->EditVanne5->setText(infoVanne5);
    ui->EditVanne6->setText(infoVanne6);
    ui->EditVanne7->setText(infoVanne7);
    ui->Etatpompe1->setText(etatP1);
    ui->Etatpompe2->setText(etatP2);
    ui->Etatpompe3->setText(etatP3);
}

Supervision::~Supervision()
{
    delete ui;
}


void Supervision::on_BoutonVannes_clicked()
{
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->videP->hide();
    ui->EditVanne1->show();
    ui->EditVanne2->show();
    ui->EditVanne3->show();
    ui->EditVanne4->show();
    ui->EditVanne5->show();
    ui->EditVanne6->show();
    ui->EditVanne7->show();
    ui->boutonModifValeurVanne1->show();
    ui->boutonModifVanne2->show();
    ui->boutonModifVanne3->show();
    ui->boutonModifVanne4->show();
    ui->boutonModifVanne5->show();
    ui->boutonModifVanne6->show();
    ui->boutonModifVanne7->show();
    ui->labelModifValVanne->show();
    ui->labelVanne1->show();
    ui->labelVanne2->show();
    ui->labelVanne3->show();
    ui->labelVanne4->show();
    ui->labelVanne5->show();
    ui->labelVanne6->show();
    ui->labelVanne7->show();
    ui->labelvanne->show();
    ui->videV->show();
    ui->label->hide();
    ui->nivEauCap1->hide();
    ui->nivEauCap2->hide();
    ui->nivEauCap3->hide();
    ui->nivEauCap4->hide();
    ui->nivEauCap5->hide();
    ui->nivEauCap6->hide();
    ui->labelCapteur1->hide();
    ui->labelCapteur2->hide();
    ui->labelCapteur3->hide();
    ui->labelCapteur4->hide();
    ui->labelCapteur5->hide();
    ui->labelCapteur6->hide();
    ui->labelInfoCapteur->hide();
}

void Supervision::on_BoutonPompes_clicked()
{
    ui->ArretPompe1->show();
    ui->ArretPompe2->show();
    ui->ArretPompe3->show();
    ui->Etatpompe1->show();
    ui->Etatpompe2->show();
    ui->Etatpompe3->show();
    ui->MarchePompe1->show();
    ui->MarchePompe2->show();
    ui->MarchePompe3->show();
    ui->infoPompe1->show();
    ui->infoPompe2->show();
    ui->infoPompe3->show();
    ui->labelEtatPompe->show();
    ui->labelInfoPompe->show();
    ui->labelPompe1->show();
    ui->labelPompe2->show();
    ui->labelPompe3->show();
    ui->videP->show();
    ui->EditVanne1->hide();
    ui->EditVanne2->hide();
    ui->EditVanne3->hide();
    ui->EditVanne4->hide();
    ui->EditVanne5->hide();
    ui->EditVanne6->hide();
    ui->EditVanne7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelVanne1->hide();
    ui->labelVanne2->hide();
    ui->labelVanne3->hide();
    ui->labelVanne4->hide();
    ui->labelVanne5->hide();
    ui->labelVanne6->hide();
    ui->labelVanne7->hide();
    ui->labelvanne->hide();
    ui->videV->hide();
    ui->label->hide();
    ui->nivEauCap1->hide();
    ui->nivEauCap2->hide();
    ui->nivEauCap3->hide();
    ui->nivEauCap4->hide();
    ui->nivEauCap5->hide();
    ui->nivEauCap6->hide();
    ui->labelCapteur1->hide();
    ui->labelCapteur2->hide();
    ui->labelCapteur3->hide();
    ui->labelCapteur4->hide();
    ui->labelCapteur5->hide();
    ui->labelCapteur6->hide();
    ui->labelInfoCapteur->hide();
}

void Supervision::on_ArreterTapis_clicked()
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


void Supervision::on_BoutonCapteur_clicked()
{
    ui->ArretPompe1->hide();
    ui->ArretPompe2->hide();
    ui->ArretPompe3->hide();
    ui->Etatpompe1->hide();
    ui->Etatpompe2->hide();
    ui->Etatpompe3->hide();
    ui->MarchePompe1->hide();
    ui->MarchePompe2->hide();
    ui->MarchePompe3->hide();
    ui->infoPompe1->hide();
    ui->infoPompe2->hide();
    ui->infoPompe3->hide();
    ui->labelEtatPompe->hide();
    ui->labelInfoPompe->hide();
    ui->labelPompe1->hide();
    ui->labelPompe2->hide();
    ui->labelPompe3->hide();
    ui->EditVanne1->hide();
    ui->EditVanne2->hide();
    ui->EditVanne3->hide();
    ui->EditVanne4->hide();
    ui->EditVanne5->hide();
    ui->EditVanne6->hide();
    ui->EditVanne7->hide();
    ui->boutonModifValeurVanne1->hide();
    ui->boutonModifVanne2->hide();
    ui->boutonModifVanne3->hide();
    ui->boutonModifVanne4->hide();
    ui->boutonModifVanne5->hide();
    ui->boutonModifVanne6->hide();
    ui->boutonModifVanne7->hide();
    ui->labelModifValVanne->hide();
    ui->labelVanne1->hide();
    ui->labelVanne2->hide();
    ui->labelVanne3->hide();
    ui->labelVanne4->hide();
    ui->labelVanne5->hide();
    ui->labelVanne6->hide();
    ui->labelVanne7->hide();
    ui->labelvanne->hide();
    ui->videV->hide();
    ui->label->show();
    ui->nivEauCap1->show();
    ui->nivEauCap2->show();
    ui->nivEauCap3->show();
    ui->nivEauCap4->show();
    ui->nivEauCap5->show();
    ui->nivEauCap6->show();
    ui->labelCapteur1->show();
    ui->labelCapteur2->show();
    ui->labelCapteur3->show();
    ui->labelCapteur4->show();
    ui->labelCapteur5->show();
    ui->labelCapteur6->show();
    ui->labelInfoCapteur->show();
}


void Supervision::on_boutonModifValeurVanne1_clicked()
{

    infoVanne1 = ui->EditVanne1->text();
    ui->EditVanne1->setText(infoVanne1);
    qDebug() << "modif V1 marche : " << infoVanne1;
}

void Supervision::on_boutonModifVanne2_clicked()
{
    infoVanne2 = ui->EditVanne2->text();
    ui->EditVanne2->setText(infoVanne2);
    qDebug() << "modif V2 marche : " << infoVanne2;
}

void Supervision::on_boutonModifVanne3_clicked()
{
    infoVanne3 = ui->EditVanne3->text();
    ui->EditVanne3->setText(infoVanne3);
    qDebug() << "modif V3 marche : " << infoVanne3;
}

void Supervision::on_boutonModifVanne4_clicked()
{
    infoVanne4 = ui->EditVanne4->text();
    ui->EditVanne4->setText(infoVanne4);
    qDebug() << "modif V4 marche : " << infoVanne4;
}

void Supervision::on_boutonModifVanne5_clicked()
{
    infoVanne5 = ui->EditVanne5->text();
    ui->EditVanne5->setText(infoVanne5);
    qDebug() << "modif V5 marche : " << infoVanne5;
}

void Supervision::on_boutonModifVanne6_clicked()
{
    infoVanne6 = ui->EditVanne6->text();
    ui->EditVanne6->setText(infoVanne6);
    qDebug() << "modif V6 marche : " << infoVanne6;
}

void Supervision::on_boutonModifVanne7_clicked()
{
    infoVanne7 = ui->EditVanne7->text();
    ui->EditVanne7->setText(infoVanne7);
    qDebug() << "modif V7 marche : " << infoVanne7;
}

void Supervision::on_MarchePompe1_clicked()
{
    etatP1 = "Pompe 1 en marche";
    ui->Etatpompe1->setText(etatP1);

}

void Supervision::on_MarchePompe2_clicked()
{
    etatP2 = "Pompe 2 en marche";
    ui->Etatpompe2->setText(etatP2);
}

void Supervision::on_MarchePompe3_clicked()
{
    etatP3 = "Pompe 3 en marche";
    ui->Etatpompe3->setText(etatP3);
}

void Supervision::on_ArretPompe1_clicked()
{
    etatP1 = "Pompe 1 arrete";
    ui->Etatpompe1->setText(etatP1);
}

void Supervision::on_ArretPompe2_clicked()
{
    etatP2 = "Pompe 2 arrete";
    ui->Etatpompe2->setText(etatP2);
}

void Supervision::on_ArretPompe3_clicked()
{
    etatP3 = "Pompe 3 arrete";
    ui->Etatpompe3->setText(etatP3);
}

//QString Supervision::getEtatPompe()
//{
//    ui->Etatpompe1->text();
//    return etatP1;
//}
