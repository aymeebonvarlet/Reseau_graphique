#ifndef WIDGETS_H
#define WIDGETS_H

#include <QWidget>
#include "parameters.h"
#include <QString>
#include "myscene.h"
#include "screen_range.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QApplication>
#include <QTextEdit>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class Widgets; }
QT_END_NAMESPACE

class Widgets : public QWidget
{
    Q_OBJECT

public:
    Widgets(QWidget *parent = nullptr);
    ~Widgets();


private:
    Ui::Widgets *ui;
};
#endif // WIDGETS_H
