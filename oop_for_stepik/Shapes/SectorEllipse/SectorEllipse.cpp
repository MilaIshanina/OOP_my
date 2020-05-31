//
// Created by Mila
//

#include "SectorEllipse.h"

SectorEllipse::SectorEllipse(Point point_center, double semiaxis1, double semiaxis2, double corner1, double corner2,
                             Color color)
        : Ellipse(point_center, semiaxis1, semiaxis2, color), corner1(corner1), corner2(corner2) {

}

std::ostream &operator<<(std::ostream &out, const SectorEllipse &ellipse) {
    out << "SectorEllipse\n" << "Point1(" << std::to_string(ellipse.point1.getX()) << ";"
        << std::to_string(ellipse.point1.getY()) << ")" << std::endl;
    out << "Point2(" << std::to_string(ellipse.point2.getX()) << ";"
        << std::to_string(ellipse.point2.getY()) << ")" << std::endl;
    out << "Point3(" << std::to_string(ellipse.point3.getX()) << ";"
        << std::to_string(ellipse.point3.getY()) << ")" << std::endl;
    out << "Point4(" << std::to_string(ellipse.point4.getX()) << ";"
        << std::to_string(ellipse.point4.getY()) << ")" << std::endl;
    out << "Point_Center(" << std::to_string(ellipse.point_center.getX()) << ";"
        << std::to_string(ellipse.point_center.getY()) << ")" << std::endl;

    out << "Corner1(" << std::to_string(ellipse.corner1) << ")" << std::endl;
    out << "Corner2(" << std::to_string(ellipse.corner2) << ")" << std::endl;

    return out;
}


void SectorEllipse::rotationOfTheShape(int corner) {
    corner1 = corner1 + corner;
    corner2 = corner2 + corner;
    Ellipse::rotationOfTheShape(corner);
}

