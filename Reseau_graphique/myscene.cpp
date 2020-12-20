#include "myscene.h"


QPoint Myscene::coor(double x, double y)
{
    return QPoint(int(m_unite*x+m_largeur/2), int(-m_unite*y+m_hauteur/2));
}

Myscene::Myscene(QWidget *parent) : QWidget(parent)
{
    setFixedSize(m_largeur,m_hauteur);
    //ajout des valeurs des fils
    QLabel *m_vf1 = new QLabel(this);
    m_vf1->setText(string_vf(Parameters::vf1));
    m_vf1->setGeometry(int(m_unite*(-450)+m_largeur/2),int(-m_unite*(340)+m_hauteur/2),30,30);
    QLabel *m_vf2 = new QLabel(this);
    m_vf2->setText(string_vf(Parameters::vf2));
    m_vf2->setGeometry(int(m_unite*(-450)+m_largeur/2),int(-m_unite*(140)+m_hauteur/2),30,30);
    QLabel *m_vf3 = new QLabel(this);
    m_vf3->setText(string_vf(Parameters::vf3));
    m_vf3->setGeometry(int(m_unite*(-450)+m_largeur/2),int(-m_unite*(-60)+m_hauteur/2),30,30);
    QLabel *m_vf4 = new QLabel(this);
    m_vf4->setText(string_vf(Parameters::vf4));
    m_vf4->setGeometry(int(m_unite*(-450)+m_largeur/2),int(-m_unite*(-260)+m_hauteur/2),30,30);


}



void Myscene::paintEvent(QPaintEvent *)
{
    //definition of QPen Color in RGB
    QPainter p(this);
    QPen noir(Qt::black,2);
    QPen purple(QColor(206,51,255),10);
    QPen sweet_green(QColor(71,180,109),10);
    QPen sweet_pink(QColor(241,13,137),10);
    QPen royal_blue(QColor(76,122,247),10);

    //lines
    p.setPen(sweet_pink);
    p.drawLine(coor(-500,300),coor(500,300));
    p.setPen(purple);
    p.drawLine(coor(-500,100),coor(500,100));
    p.setPen(sweet_green);
    p.drawLine(coor(-500,-100),coor(500,-100));
    p.setPen(royal_blue);
    p.drawLine(coor(-500,-300),coor(500,-300));



}

QString Myscene::string_vf(double v)
{
    QString res;
    QTextStream buf(&res);
    buf<<v;
    return res;

}













