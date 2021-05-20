#ifndef GESTIONXML_H
#define GESTIONXML_H

#include <QCoreApplication>
#include <QtXml>
#include <QDebug>
#include <QVector>

class gestionXml
{
public:
    gestionXml();
    void openFile(QString path);
    void readElement(QString data);
    void structSenace(QString path);
    void newSeance(QString dateArrivee, QString dateDepart, QString heureDepart, QString heureArrivee, QString type);
    void modElement(gestionXml& xml);
    void supElement(QString id);
    void setSenace(QString id);
    QString getTab(int n);
    int getNumberId();
    QVector<int> idDay(QString data);

private:
    QDomDocument document;
    QFile file;
    QDomNode noeud;
    QDomElement element;
    QDomElement dom_element;
    QString tab[5];
};

#endif // GESTIONXML_H
