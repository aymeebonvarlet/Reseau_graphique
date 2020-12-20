#include "connecteur.h"
#include <QTextStream>



int Connecteur::getNum_connexion() const
{
    return num_connexion;
}

int Connecteur::getPosition_f1() const
{
    return position_f1;
}

int Connecteur::getPosition_f2() const
{
    return position_f2;
}

Connecteur::Connecteur(int nc, int p1, int p2) : num_connexion(nc), position_f1(p1), position_f2(p2)
{

}


QString Connecteur::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"No connexion : "<<num_connexion<<" ; depuis "<<position_f1<<" vers "<<position_f2;
    return res;
}


