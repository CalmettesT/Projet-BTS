#include "gestionxml.h"
#include <iostream>

gestionXml::gestionXml()
{

}

void gestionXml::openFile(QString path)
{
    file.setFileName(path);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug()<< "erreur lors de l'ouverture";
    else
    {
        if(!document.setContent(&file))
            qDebug()<< "erreur lors du chargement";
    }
//    file.close();
}

void gestionXml::readElement(QString data)
{
    dom_element = document.documentElement();

    noeud = dom_element.firstChild();

    QDomElement domElement = noeud.toElement();
        while (!noeud.isNull()) {
            QDomElement domElement = noeud.toElement();
            if (!domElement.isNull()) {
                if (domElement.tagName() == "seance") {
                    QDomNode node = domElement.firstChild();
                    while (!node.isNull()) {
                        QDomElement element = node.toElement();
                        if (!element.isNull()) {
                            const QString tagName(element.tagName());
                            if (tagName == data) {
                                qDebug() << data << " is:" << element.text();
                            }
                        node = node.nextSibling();
                        }
                    }
                }
            }
                noeud = noeud.nextSibling();
    }
    file.close();
}

void gestionXml::structSenace(QString path)
{
    QString fileXmlName = path;
    QFile fileXml(fileXmlName);

    // Ouverture du fichier en écriture et en texte. (sort de la fonction si le fichier ne s'ouvre pas)
    if(!fileXml.open(QFile::WriteOnly | QFile::Text))
        qDebug()<<"erreur";

    QXmlStreamWriter writer(&fileXml);

    // Active l'indentation automatique du fichier XML pour une meilleur visibilité
    writer.setAutoFormatting(true);

    // Insert la norme de codification du fichier XML
    writer.writeStartDocument();

    // Élément racine du fichier XML
    writer.writeStartElement("seances");

    // Finalise le document XML
    writer.writeEndDocument();

    // Fermer le fichier pour bien enregistrer le document et ferme l'élément root
    fileXml.close();

}

void gestionXml::newSeance(QString dateArrivee, QString dateDepart, QString heureDepart, QString heureArrivee, QString type)
{

    QFile file(pathG);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file";
    }
    QDomDocument document;
    if (!document.setContent(&file))
    {
        qDebug() << "failed to parse file";
        file.close();
    }

    file.close();



    QDomNodeList umgVars = dom_element.elementsByTagName("seance");

    QDomNode lastElem = umgVars.at(umgVars.size() - 1);
    dom_element = document.documentElement();
    noeud = dom_element.firstChild();
    QDomElement domElement = noeud.toElement();
    QDomElement lastEEEE = lastElem.toElement();
    int id = 0;

    while (!noeud.isNull()) {
        QDomElement domElement = noeud.toElement();
        if (!domElement.isNull()) {
            id++;
            qDebug()<<id;
            if (domElement.attribute("id")!="") {
                id++;
                qDebug()<<id;
                qDebug()<<domElement.attribute("id").toInt();
                id = domElement.attribute("id").toInt();
            }
            qDebug()<<"nop";
        }
        noeud = noeud.nextSibling();
    }
    file.close();


    QDomElement docEle = document.documentElement();
    QDomNodeList elements = docEle.elementsByTagName("seances");

    QDomElement seance = document.createElement("seance");
    seance.setAttribute("id", id+1);

    QDomElement dateArEle = document.createElement("dateArrivee");
    QDomText dateArCont = document.createTextNode(dateArrivee);

    QDomElement dateDeEle = document.createElement("dateDepart");
    QDomText dateDeCont = document.createTextNode(dateDepart);

    QDomElement heureArEle = document.createElement("heureArrivee");
    QDomText heureArCont = document.createTextNode(heureArrivee);

    QDomElement heureDeEle = document.createElement("heureDepart");
    QDomText heureDeCont = document.createTextNode(heureDepart);

    QDomElement typeEle = document.createElement("typeClient");
    QDomText typeCont = document.createTextNode(type);

    dateArEle.appendChild(dateArCont);
    dateDeEle.appendChild(dateDeCont);
    heureArEle.appendChild(heureArCont);
    heureDeEle.appendChild(heureDeCont);
    typeEle.appendChild(typeCont);

    seance.appendChild(dateArEle);
    seance.appendChild(heureArEle);
    seance.appendChild(dateDeEle);
    seance.appendChild(heureDeEle);
    seance.appendChild(typeEle);

    docEle.appendChild(seance);

    QFile outFile(pathG);

    if( !outFile.open( QIODevice::WriteOnly | QIODevice::Text ) )
        qDebug( "Failed to open file for writing." );

    QTextStream stream( &outFile );
    stream << document.toString();

    outFile.close();

}

void gestionXml::supElement(QString id)
{

    QFile file(pathG);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file";
    }
    QDomDocument document;
    if (!document.setContent(&file))
    {
        qDebug() << "failed to parse file";
        file.close();
    }

    file.close();

    dom_element = document.documentElement();
    QDomNodeList umgVars = dom_element.elementsByTagName("seance");
    QDomNode lastElem = umgVars.at(umgVars.size() - 2);
    dom_element = document.documentElement();
    noeud = dom_element.firstChild();
    QDomElement domElement = noeud.toElement();
    QDomElement lastEEEE = lastElem.toElement();

    int i = 0;

    while (!noeud.isNull()) {
        QDomElement domElement = noeud.toElement();
        if (!domElement.isNull()) {
            if (domElement.tagName()=="seance" && domElement.attribute("id")==id) {
                qDebug()<<domElement.attribute("id").toInt();
                i = 0;
            }
            i++;
            qDebug()<<i;
            lastElem = umgVars.at(umgVars.size() - i);
            qDebug()<<"nop";
        }
        noeud = noeud.nextSibling();
    }
    lastElem.parentNode().removeChild(lastElem);
    file.close();

    QFile outFile(pathG);

    if( !outFile.open( QIODevice::WriteOnly | QIODevice::Text ) )
        qDebug( "Failed to open file for writing." );

    QTextStream stream( &outFile );
    stream << document.toString();

    outFile.close();

}

void gestionXml::modElement(gestionXml& xml)
{
    xml.supElement("2");
    xml.newSeance("1","2","3","4","5");
}

void gestionXml::setSenace(QString id)
{
    dom_element = document.documentElement();

    noeud = dom_element.firstChild();
    int n = 0;

    QDomElement domElement = noeud.toElement();
        while (!noeud.isNull()) {
            QDomElement domElement = noeud.toElement();
            if (!domElement.isNull()) {
                if (domElement.tagName() == "seance" && domElement.attribute("id")==id) {
                    QDomNode node = domElement.firstChild();
                    while (!node.isNull()) {
                        QDomElement element = node.toElement();
                        if (!element.isNull()) {
                            const QString tagName(element.tagName());
                            tab[n] = element.text();
//                            qDebug() << tab[n];
                            node = node.nextSibling();
                            n++;
                        }
                    }
                }
            }
                noeud = noeud.nextSibling();
    }
    file.close();



}

QString gestionXml::getTab(int n)
{
    return tab[n];
}

int gestionXml::getNumberId()
{
    QFile file(pathG);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file";
    }
    QDomDocument document;
    if (!document.setContent(&file))
    {
        qDebug() << "failed to parse file";
        file.close();
    }

    file.close();

    QDomNodeList umgVars = dom_element.elementsByTagName("seance");

    QDomNode lastElem = umgVars.at(umgVars.size() - 1);
    dom_element = document.documentElement();
    noeud = dom_element.firstChild();
    QDomElement domElement = noeud.toElement();
    QDomElement lastEEEE = lastElem.toElement();
    int id = 0;

    while (!noeud.isNull()) {
        QDomElement domElement = noeud.toElement();
        if (!domElement.isNull()) {
            id++;
//            qDebug()<<id;
            if (domElement.attribute("id")!="") {
                id++;
//                qDebug()<<id;
//                qDebug()<<domElement.attribute("id").toInt();
                id = domElement.attribute("id").toInt();

            }
//            qDebug()<<"nop";
        }
        noeud = noeud.nextSibling();
    }
    file.close();
    qDebug()<<id;
    return id;
}

QVector<int> gestionXml::idDay(QString data)
{
    QFile file(pathG);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Failed to open file";
    }
    QDomDocument document;
    if (!document.setContent(&file))
    {
        qDebug() << "failed to parse file";
        file.close();
    }

    file.close();

    QDomNodeList umgVars = dom_element.elementsByTagName("seance");

    QDomNode lastElem = umgVars.at(umgVars.size() - 1);
    dom_element = document.documentElement();
    noeud = dom_element.firstChild();
    QDomElement domElement = noeud.toElement();
    QDomElement lastEEEE = lastElem.toElement();
    int id = 0;
    QVector<int> mesIds;

    while (!noeud.isNull()) {
        QDomElement domElement = noeud.toElement();
        if (!domElement.isNull()) {
            id++;

            if (domElement.attribute("id") != "") {
                id++;
                id = domElement.attribute("id").toInt();
            }

            if (domElement.tagName() == "seance") {
                QDomNode node = domElement.firstChild();
                while (!node.isNull()) {
                    QDomElement element = node.toElement();
                    if (!element.isNull()) {
                        const QString tagName(element.tagName());
                        if (tagName == "dateArrivee") {
                            if(element.text() == data){
                                mesIds << id;
//                                qDebug()<<mesIds;
                            }
                        }
                    node = node.nextSibling();
                    }
                }
            }
        }
        noeud = noeud.nextSibling();
    }
    file.close();

    return mesIds;
}
