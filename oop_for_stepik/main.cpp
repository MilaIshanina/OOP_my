#include <iostream>
#include "Shapes/Rectangle/Rectangle.h"
#include "Shapes/Ellipse/Ellipse.h"
#include "Shapes/SectorEllipse/SectorEllipse.h"

int main() {

    Rectangle rectangle(Point(1, 1), 2, 4, Color(4, 5, 2));
    //rectangle.zoomingTheShape(0.5);
    rectangle.rotationOfTheShape(-90);
    std::cout << rectangle;

    Ellipse ellipse(Point(1, 1), 3, 2, Color(4, 5, 2));
    ellipse.zoomingTheShape(0.5);
    ellipse.rotationOfTheShape(90);
    std::cout << ellipse;


    SectorEllipse sectorEllipse(Point(1, 1), 3, 2,0,90, Color(4, 5, 2));
    sectorEllipse.moveOfTheFigure(1, 1);
    std::cout << sectorEllipse;


    return 0;
}
