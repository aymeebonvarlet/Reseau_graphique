#ifndef FILS_H
#define FILS_H

#include <QList>
#include <QString>

class Fils
{
private:
    int position;
    int valeur;
public:
    Fils(int pos, int v);
    int getPosition() const;
    void setPosition(int value);
    int getValeur() const;
    QString toString();
    void setValeur(int value);
};

#endif // NOMBRES_H
