#ifndef CONNECTEUR_H
#define CONNECTEUR_H
#include <QString>
#include "fils.h"

class Connecteur
{
private:
    int num_connexion;
    int position_f1;
    int position_f2;
public:
    Connecteur(int nc, int p1 , int p2);
    int getNum_connexion() const;
    int getPosition_f1() const;
    int getPosition_f2() const;
    QString toString();
};

#endif // CONNECTEUR_H
