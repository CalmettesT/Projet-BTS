#ifndef SOCKETTEST_H
#define SOCKETTEST_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>

class SocketTest : public QObject
{
    Q_OBJECT
public:
    explicit SocketTest(QObject *parent = 0);

void Connect();
    
signals:
    
public slots:

private:
    QTcpSocket *socket;
    QString pathG = "C:/Users/Christian GROS/Documents/Code/InterfaceAgenda/xml/test3.xml";
    
};

#endif // SOCKETTEST_H
