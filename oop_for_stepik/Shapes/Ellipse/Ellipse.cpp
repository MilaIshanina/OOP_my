//
// Created by Mila on 30.05.2020.
//

#include "Ellipse.h"
#include "../../Point/Point.h"
#include "../../Color/Color.h"
#include "../SectorEllipse/SectorEllipse.h"


constexpr double PI = 3.14159265358979323846264338;

Ellipse::Ellipse(Point point_center, double semiaxisY, double semiaxisX, Color color)
        : Shape(color), point_center(point_center), point1(point_center.getX(), point_center.getY() + semiaxisY),
          point2(point_center.getX() + semiaxisX, point_center.getY()),
          point3(point_center.getX(), point_center.getY() - semiaxisY),
          point4(point_center.getX() - semiaxisX, point_center.getY()),
          semiaxisY(semiaxisY), semiaxisX(semiaxisX) {

}

void Ellipse::moveOfTheFigure(double offset_by_x, double offset_by_y) {
    point1.updateForMove(offset_by_x, offset_by_y);
    point2.updateForMove(offset_by_x, offset_by_y);
    point3.updateForMove(offset_by_x, offset_by_y);
    point4.updateForMove(offset_by_x, offset_by_y);
    point_center.updateForMove(offset_by_x, offset_by_y);

}

void Ellipse::zoomingTheShape(double coefficient) {
    double offsetXPoint_CenterAndPoint1 = point1.getX() - point_center.getX();
    double offsetYPoint_CenterAndPoint1 = point1.getY() - point_center.getY();
    point1.setX(point_center.getX() + offsetXPoint_CenterAndPoint1 * coefficient);
    point1.setY(point_center.getY() + offsetYPoint_CenterAndPoint1 * coefficient);

    double offsetXPoint_CenterAndPoint2 = point2.getX() - point_center.getX();
    double offsetYPoint_CenterAndPoint2 = point2.getY() - point_center.getY();
    point2.setX(point_center.getX() + offsetXPoint_CenterAndPoint2 * coefficient);
    point2.setY(point_center.getY() + offsetYPoint_CenterAndPoint2 * coefficient);

    double offsetXPoint_CenterAndPoint3 = point3.getX() - point_center.getX();
    double offsetYPoint_CenterAndPoint3 = point3.getY() - point_center.getY();
    point3.setX(point_center.getX() + offsetXPoint_CenterAndPoint3 * coefficient);
    point3.setY(point_center.getY() + offsetYPoint_CenterAndPoint3 * coefficient);

    double offsetXPoint_CenterAndPoint4 = point4.getX() - point_center.getX();
    double offsetYPoint_CenterAndPoint4 = point4.getY() - point_center.getY();
    point4.setX(point_center.getX() + offsetXPoint_CenterAndPoint4 * coefficient);
    point4.setY(point_center.getY() + offsetYPoint_CenterAndPoint4 * coefficient);

    semiaxisX= semiaxisX * coefficient;
    semiaxisY= semiaxisY * coefficient;

}

void Ellipse::rotationOfTheShape(int corner) {
    double oldXPointCenter = point_center.getX();
    double oldYPointCenter = point_center.getY();
    double radian = corner * PI / 180;

    point_center.rotate(radian);
    point1.rotate(radian);
    point2.rotate(radian);
    point3.rotate(radian);
    point4.rotate(radian);

    double offsetX = oldXPointCenter - point_center.getX();
    double offsetY = oldYPointCenter - point_center.getY();

    moveOfTheFigure(offsetX, offsetY);
}

std::ostream &operator<<(std::ostream &out, const Ellipse &ellipse) {
    out << "Ellipse\n" << "Point1(" << std::to_string(ellipse.point1.getX()) << ";"
        << std::to_string(ellipse.point1.getY()) << ")" << std::endl;
    out << "Point2(" << std::to_string(ellipse.point2.getX()) << ";"
        << std::to_string(ellipse.point2.getY()) << ")" << std::endl;
    out << "Point3(" << std::to_string(ellipse.point3.getX()) << ";"
        << std::to_string(ellipse.point3.getY()) << ")" << std::endl;
    out << "Point4(" << std::to_string(ellipse.point4.getX()) << ";"
        << std::to_string(ellipse.point4.getY()) << ")" << std::endl;
    out << "Point_Center(" << std::to_string(ellipse.point_center.getX()) << ";"
        << std::to_string(ellipse.point_center.getY()) << ")" << std::endl;
    /*out << "The_equation_of_the_ellipse( (x-" << std::to_string(ellipse.point_center.getX()) << ")^2/ "
        << std::to_string(ellipse.semiaxisX * ellipse.semiaxisX) << "+ (y-"
        << std::to_string(ellipse.point_center.getX()) << ")^2/ "
        << std::to_string(ellipse.semiaxisY * ellipse.semiaxisY) << " = 1 )" << std::endl;*/

    return out;
}


