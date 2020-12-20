#include "widgets.h"


Widgets::Widgets(QWidget *parent)
    : QWidget(parent)
{
    // créer les différents widgets de l'application
    Myscene *nf=new Myscene();
    QPushButton *quit=new QPushButton("Quit");


    // agencer les widgets dans un layout
    QVBoxLayout *qvb=new QVBoxLayout();
    qvb->addWidget(nf);
    qvb->addWidget(quit);


    setLayout(qvb);

    // connecter les signaux aux récepteurs
    connect(quit,SIGNAL(clicked()),qApp,SLOT(quit()));

}

Widgets::~Widgets()
{
}



