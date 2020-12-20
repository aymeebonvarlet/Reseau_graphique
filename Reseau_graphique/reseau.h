#ifndef RESEAU_H
#define RESEAU_H

#include <QList>
#include <QString>
#include <QDebug>
#include "connecteur.h"
#include "fils.h"
#include "parameters.h"

class Reseau
{
private:
    int nb_fils;
    int nb_connecteur;
public:
    Reseau(int nf, int nc);
    QList<Connecteur *> connecteur;
    QList<Fils *> fils;
    void ajoute_connecteur(int p, int d=0, int f=0);
    void ajoute_fil(int p, int v=0);
    void ajoute_fil(QList<int> l);
    QString toString();
    void reseau_tri();

};

#endif // RESEAU_H
