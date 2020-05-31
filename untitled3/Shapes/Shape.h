//
// Created by Mila
//

#ifndef UNTITLED3_SHAPE_H
#define UNTITLED3_SHAPE_H

#include "../Color/Color.h"

class Shape {
public:
    virtual void moveOfTheFigure(double offset_by_x, double offset_by_y) = 0;
    virtual void zoomingTheShape(double coefficient) = 0;
    virtual void rotationOfTheShape(int corner) = 0;
    const Color &getColor() const {
        return color;
    }
    void setColor(const Color &color) {
        Shape::color = color;
    }

protected:
    Color color;
    Shape(Color color): color(color){}
};

#endif //UNTITLED3_SHAPE_H
