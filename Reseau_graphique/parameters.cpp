#include "parameters.h"
#include "qstd.h"
using namespace qstd;

int Parameters::debug = 1;


double Parameters::vf1=10;
double Parameters::vf2=2;
double Parameters::vf3=6;
double Parameters::vf4=3;

double Parameters::pos_vf1=0;
double Parameters::pos_vf2=1;
double Parameters::pos_vf3=2;
double Parameters::pos_vf4=3;

void Parameters::setPos_vf2(double value)
{
    pos_vf2 = value;
}

void Parameters::setPos_vf3(double value)
{
    pos_vf3 = value;
}

void Parameters::setPos_vf4(double value)
{
    pos_vf4 = value;
}

QString Parameters::str_fils()
{
    QString res;
    QTextStream buf(&res);
    buf<<"Num position : "<<<<" ; valeur : "<<valeur;
    return res;
}

void Parameters::setPos_vf1(double value)
{
    pos_vf1 = value;
}
