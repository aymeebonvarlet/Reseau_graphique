#ifndef BINARY_H
#define BINARY_H
#include <QList>
#include <cmath>

class Binary
{
public:
    static QString toString(const QList<int> &l);
    static int puiss2(int v){return pow(2,v);}
    static QList<int> classed(int nb, int v);
};

#endif // BINARY_H
