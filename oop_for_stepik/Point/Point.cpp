//
// Created by Mila on 30.05.2020.
//

#include <cmath>
#include "Point.h"

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

Point::Point(double x, double y) : x(x), y(y) {}

void Point::setX(double x) {
    Point::x = x;
}

void Point::setY(double y) {
    Point::y = y;
}

void Point::updateForMove(double offset_by_x, double offset_by_y) {
    Point::x += offset_by_x;
    Point::y += offset_by_y;
}

void Point::rotate(double radian) {
    double newX = x * cos(radian) - y * sin(radian);
    double newY = x * sin(radian) + y * cos(radian);
    x = newX;
    y = newY;
}
