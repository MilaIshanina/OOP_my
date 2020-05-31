//
// Created by Mila on 30.05.2020.
//

#ifndef UNTITLED3_POINT_H
#define UNTITLED3_POINT_H


class Point {
private:
    double x;
    double y;
public:
    void setX(double x);
    void setY(double y);
    double getX() const;
    double getY() const;
    void rotate(double radian);
    Point(double x, double y);
    void updateForMove(double offset_by_x, double offset_by_y);
};


#endif //UNTITLED3_POINT_H
