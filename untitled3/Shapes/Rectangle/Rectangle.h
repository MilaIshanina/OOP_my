//
// Created by Mila on 30.05.2020.
//

#ifndef UNTITLED3_RECTANGLE_H
#define UNTITLED3_RECTANGLE_H


#include <ostream>
#include "../Shape.h"
#include "../../Point/Point.h"


class Rectangle: public Shape {
private:
    Point point1;
    Point point2;
    Point point3;
    Point point4;
    public:
    Rectangle(Point point1, double width, double height, Color color);
    void moveOfTheFigure(double offset_by_x, double offset_by_y) override;

    void zoomingTheShape(double coefficient) override;

    void rotationOfTheShape(int corner) override;

    friend std::ostream& operator<< (std::ostream &out, const Rectangle &rectangle);
};


#endif //UNTITLED3_RECTANGLE_H
