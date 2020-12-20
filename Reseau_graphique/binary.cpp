#include "binary.h"
#include <QTextStream>


QString Binary::toString(const QList<int> &l)
{
    QString res;
    QTextStream buff(&res);
    return res;
}

QList<int> Binary::classed(int nb, int v)
{
    for (int i=0 ; i<puiss2(nb); i++){
        QList<int> v_input;
        v=i;
        for(int j ; j<nb ; j++){
            v_input.prepend(v%2);

        }
    }

}



