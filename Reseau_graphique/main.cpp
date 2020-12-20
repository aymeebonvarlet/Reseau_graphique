#include "qstd.h"
using namespace qstd;

#include "fils.h"
#include "reseau.h"
#include <QList>
#include <QTextStream>
#include <QDebug>
#include "widgets.h"
#include <QApplication>
#include "text.h"
#include "parameters.h"


int main(int argc, char *argv[])
{
    cout<<"Projet Reseau de tri"<<endl<<endl;
    int vf1=10, vf2=2, vf3=6, vf4=3;
    /*cout<<"valeur fils 1"<<endl;
    cin>>vf1;
    cout<<"valeur fils 2"<<endl;
    cin>>vf2;
    cout<<"valeur fils 3"<<endl;
    cin>>vf3;
    cout<<"valeur fils 4"<<endl;
    cin>>vf4;*/
    cout<<"On creait le reseau res contenant 4 fils et 5 connexions"<<endl;
    Reseau res(4,5);
    cout<<"On insere les valeurs des fils dans une liste"<<endl;
    QList<int> valeurs;
    valeurs<<Parameters::vf1<<Parameters::vf2<<Parameters::vf3<<Parameters::vf4;
    res.ajoute_fil(valeurs);
    cout<<"On creait la liste des connecteurs: "<<endl;
    cout<<"Creation connexion 0 entre le fil a la position 0 et le fil position 2"<<endl;
    res.ajoute_connecteur(0,0,2);
    cout<<"Creation connexion  1 entre le fil a la position 1 et le fil position 3"<<endl;
    res.ajoute_connecteur(1,1,3);
    cout<<"Creation connexion  2 entre le fil a la position 0 et le fil position 1"<<endl;
    res.ajoute_connecteur(2,0,1);
    cout<<"Ajout d'une deuxieme connexion 2 entre le fil a la position 2 et le fil position 3"<<endl;
    res.ajoute_connecteur(2,2,3);
    cout<<"Creation connexion 3 entre le fil a la position 1 et le fil position 2"<<endl<<endl;
    res.ajoute_connecteur(3,1,2);
    cout<<"On commence le tri :"<<endl;
    res.reseau_tri();
    cout<<endl<<"La liste finale est : "<<endl;
    qDebug() <<res.toString();
    QApplication a(argc, argv);
    Widgets w;
    w.show();
    return a.exec();
}
