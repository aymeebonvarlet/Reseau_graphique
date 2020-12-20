#include "text.h"



Text::Text(QWidget *parent)
    : QGraphicsView(parent)
{
    scene = new QGraphicsScene(this);
    setScene(scene);
    scene->addText("test");
}
void Text::resizeEvent(QResizeEvent * event)
{
    scene->setSceneRect( QRect(QPoint(0, 0), size()) );
    fitInView(sceneRect());
}

