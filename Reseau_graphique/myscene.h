#ifndef MYSCENE_H
#define MYSCENE_H

#include <QObject>
#include <QWidget>
#include <QGraphicsView>
#include <QLabel>
#include <QPainter>
#include <cmath>
#include "parameters.h"
#include <QTextStream>

#include "reseau.h"

class Myscene : public QWidget
{

    Q_OBJECT
private:
    int m_largeur=1000;
    int m_hauteur=800;
    double m_unite=1;
    QPoint coor(double x, double y);
    double fonction(double x);

public:
    Myscene(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    QString string_vf(double v);

signals:

   public slots:
};

#endif // MYSCENE_H
