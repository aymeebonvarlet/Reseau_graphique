#include "fils.h"
#include <QTextStream>

void Fils::setValeur(int value)
{
    valeur = value;
}

Fils::Fils(int pos, int v): position(pos), valeur(v)
{

}

int Fils::getPosition() const
{
    return position;
}

void Fils::setPosition(int value)
{
    position = value;
}

int Fils::getValeur() const
{
    return valeur;
}

QString Fils::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<"Num position : "<<position<<" ; valeur : "<<valeur;
    return res;
}
