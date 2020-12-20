#ifndef PARAMETERS_H
#define PARAMETERS_H

#include <QString>
#include <fils.h>

class Parameters
{
public:
    static QList<Fils> l_graph_fils;
    static double vf1;
    static double vf2;
    static double vf3;
    static double vf4;
    static double pos_vf1;
    static double pos_vf2;
    static double pos_vf3;
    static double pos_vf4;
    static int debug;
    static void setPos_vf1(double value);
    static void setPos_vf2(double value);
    static void setPos_vf3(double value);
    static void setPos_vf4(double value);
    static QString str_fils(int index);
};

#endif // PARAMETERS_H
