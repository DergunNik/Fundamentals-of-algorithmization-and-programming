#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure
{
public:
    Circle();
    int r = 0;
    bool is;
    float findArea() override;
    float findPerimeter() override;
    void setR(int);
    int getR();
    void isCh(bool);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) override;
};

#endif // CIRCLE_H
