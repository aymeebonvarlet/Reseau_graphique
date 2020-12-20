#include "reseau.h"




Reseau::Reseau(int nf, int nc): nb_fils(nf), nb_connecteur(nc)
{

}

void Reseau::ajoute_connecteur(int p, int d, int f)
{
    Connecteur *c = new Connecteur(p,d,f);
    connecteur.append(c);
}

void Reseau::ajoute_fil(int p, int v)
{
    Fils *f = new Fils(p,v);
    fils.append(f);
}

void Reseau::ajoute_fil(QList<int> l)
{
    for(int p=0;p<l.size();p++) {
        ajoute_fil(p,l.at(p));
    }
}

QString Reseau::toString()
{
    QString res;
    QTextStream buf(&res);
    buf<<fils[0]->getValeur()<<" "<<fils[1]->getValeur()<<" "<<fils[2]->getValeur()<<" "<<fils[3]->getValeur();
    return res;
}

void Reseau::reseau_tri()
{
    qDebug() <<"Voici la valeur des fils avant tri : "<<toString();
    for(int i = 0 ; i<5 ; i++){
            int f1 = connecteur[i]->getPosition_f1();
            int f2 = connecteur[i]->getPosition_f2();
            int vf1 = fils[f1]->getValeur();
            int vf2 = fils[f2]->getValeur();
            if (vf1>vf2){
                qDebug() <<"Position "<<i<<" : les elements "<<vf1<<" et "<<vf2<<" sont mal tries";
                int pf3=fils[f1]->getPosition();
                int vf3= fils[f1]->getValeur();
                fils[f1]->setPosition(fils[f2]->getPosition());
                fils[f2]->setPosition(pf3);
                fils[f1]->setValeur(fils[f2]->getValeur());
                fils[f2]->setValeur(vf3);
                qDebug() <<"Apres changement : "<<toString();
            }
        }

    }







