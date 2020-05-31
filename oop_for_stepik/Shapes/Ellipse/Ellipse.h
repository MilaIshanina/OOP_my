//
// Created by Mila on 30.05.2020.
//

#ifndef UNTITLED3_ELLIPSE_H
#define UNTITLED3_ELLIPSE_H
#include <ostream>
#include "../Shape.h"
#include "../../Point/Point.h"

class Ellipse: public Shape {

protected:
    Point point_center;
    Point point1;
    Point point2;
    Point point3;
    Point point4;
    double semiaxisX;
    double semiaxisY;
public:
    Ellipse(Point point_center, double semiaxisY, double semiaxisX, Color color);

    void moveOfTheFigure(double offset_by_x, double offset_by_y) override;

    void zoomingTheShape(double coefficient) override;

    void rotationOfTheShape(int corner) override;

    friend std::ostream& operator<< (std::ostream &out, const Ellipse &ellipse);


};


#endif //UNTITLED3_ELLIPSE_H
