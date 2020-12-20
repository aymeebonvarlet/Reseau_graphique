#include "screen_range.h"
#include <QLCDNumber>
#include <QSlider>
#include <QLabel>
#include <QHBoxLayout>


Screen_range::Screen_range(QString label, uint nblcd, int min, int max, int valDep, QWidget *parent)
    : QWidget(parent)
{
    QLabel *l=new QLabel(label);
    QSlider *qs=new QSlider(Qt::Horizontal);
    qs->setRange(min, max);
    if (valDep==1)
        valDep=(min+max)/2;
    qs->setValue(valDep);

    QLCDNumber *qlcd=new QLCDNumber(nblcd);
    QHBoxLayout *qh=new QHBoxLayout();
    qh->addWidget(l);
    qh->addWidget(qs);
    qh->addWidget(qlcd);
    setLayout(qh);
    connect(qs, SIGNAL(valueChanged(int)), qlcd, SLOT(display(int)));

    emit qs->valueChanged(valDep);

    connect(qs, SIGNAL(valueChanged(int)), this, SIGNAL(valueChanged(int)));

}
