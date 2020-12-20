#ifndef TEXT_H
#define TEXT_H

#include <QObject>
#include <QWidget>
#include <QGraphicsView>

class Text : public QGraphicsView
{
    Q_OBJECT
public:
    Text(QWidget *parent = 0);
protected:
    void resizeEvent(QResizeEvent * event);
private:
    QGraphicsScene * scene;;
};

#endif // TEXT_H
