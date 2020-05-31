//
// Created by Mila
//

#include "Rectangle.h"
constexpr double PI = 3.14159265358979323846264338;

Rectangle::Rectangle(Point point, double width, double height, Color color)
: Shape(color), point4(point.getX() + width, point.getY() + height), point3(point.getX(), point.getY() + height), point2(point.getX() + width, point.getY()), point1(point)
{


}

void Rectangle::moveOfTheFigure(double offset_by_x, double offset_by_y) {
    point1.updateForMove(offset_by_x, offset_by_y);
    point2.updateForMove(offset_by_x, offset_by_y);
    point3.updateForMove(offset_by_x, offset_by_y);
    point4.updateForMove(offset_by_x, offset_by_y);

}

void Rectangle::zoomingTheShape(double coefficient) {
    double offsetXPoint1AndPoint2 = point2.getX() - point1.getX();
    double offsetYPoint1AndPoint2 = point2.getY() - point1.getY();
    point2.setX(point1.getX() + offsetXPoint1AndPoint2 * coefficient);
    point2.setY(point1.getY() + offsetYPoint1AndPoint2 * coefficient);

    double offsetXPoint1AndPoint3 = point3.getX() - point1.getX();
    double offsetYPoint1AndPoint3 = point3.getY() - point1.getY();
    point3.setX(point1.getX() + offsetXPoint1AndPoint3 * coefficient);
    point3.setY(point1.getY() + offsetYPoint1AndPoint3 * coefficient);

    double offsetXPoint1AndPoint4 = point4.getX() - point1.getX();
    double offsetYPoint1AndPoint4 = point4.getY() - point1.getY();
    point4.setX(point1.getX() + offsetXPoint1AndPoint4 * coefficient);
    point4.setY(point1.getY() + offsetYPoint1AndPoint4 * coefficient);

}

void Rectangle::rotationOfTheShape(int corner) {
    double oldXPoint1 = point1.getX();
    double oldYPoint1 = point1.getY();
    double radian = corner * PI / 180;

    point1.rotate(radian);
    point2.rotate(radian);
    point3.rotate(radian);
    point4.rotate(radian);

    double offsetX = oldXPoint1 - point1.getX();
    double offsetY = oldYPoint1 - point1.getY();

    moveOfTheFigure(offsetX, offsetY);
}

std::ostream &operator<<(std::ostream &out, const Rectangle &rectangle) {
    out << "Rectangle\n" << "Point1(x = " << std::to_string(rectangle.point1.getX()) << "; y = "
        << std::to_string(rectangle.point1.getY()) << ")" << std::endl;
    out << "Point2(x = " << std::to_string(rectangle.point2.getX()) << "; y = "
        << std::to_string(rectangle.point2.getY()) << ")" << std::endl;
    out << "Point3(x = " << std::to_string(rectangle.point3.getX()) << "; y = "
        << std::to_string(rectangle.point3.getY()) << ")" << std::endl;
    out << "Point4(x = " << std::to_string(rectangle.point4.getX()) << "; y = "
        << std::to_string(rectangle.point4.getY()) << ")" << std::endl;

    return out;
}

