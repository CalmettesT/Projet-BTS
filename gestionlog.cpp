#include "gestionlog.h"

GestionLog::GestionLog()
{

}


void GestionLog::ajoutLog(string data)
{
    ofstream monFlux(chemin.c_str(), fstream::app|fstream::out);

    if(monFlux)
    {
        QString sDate = QDateTime::currentDateTime().toString("dd/MM/yyyy  hh:mm:ss");
        string date = sDate.toStdString();
        monFlux << date <<endl << data;
        monFlux.close();
    }
    else
    {
        qDebug()<<"erreur";
    }

}


void GestionLog::clear()
{
    ofstream fichier(chemin.c_str());
    fichier.close();
    if(remove(chemin.c_str())==0)
    {
        qDebug()<<"supression reussi";
    }
    else
    {
        qDebug()<<"erreur supression";
    }
}

