#ifndef SCREEN_RANGE_H
#define SCREEN_RANGE_H

#include <QObject>
#include <QWidget>

class Screen_range:public QWidget
{
    Q_OBJECT
public:
    explicit Screen_range(QString label="", uint nblcd=3, int min=0, int max=99, int valDep=-1,QWidget *parent = nullptr);

signals:
    void valueChanged(int);
public slots:
};

#endif // SCREEN_RANGE_H
