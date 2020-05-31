//
// Created by Mila on 30.05.2020.
//

#ifndef UNTITLED3_SECTORELLIPSE_H
#define UNTITLED3_SECTORELLIPSE_H


#include "../Ellipse/Ellipse.h"

class SectorEllipse: public Ellipse {
private:
    double corner1;
    double corner2;
public:
    SectorEllipse(Point point_center, double semiaxis1, double semiaxis2, double corner1, double corner2, Color color);

    void rotationOfTheShape(int corner) override;

    friend std::ostream& operator<< (std::ostream &out, const SectorEllipse &sectorEllipse);
};


#endif //UNTITLED3_SECTORELLIPSE_H
