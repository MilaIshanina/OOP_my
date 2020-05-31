cmake_minimum_required(VERSION 3.15)
project(untitled3)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled3 main.cpp Color/Color.cpp Color/Color.h Point/Point.cpp Point/Point.h Shapes/Shape.h Shapes/Rectangle/Rectangle.cpp Shapes/Rectangle/Rectangle.h Shapes/Ellipse/Ellipse.cpp Shapes/Ellipse/Ellipse.h Shapes/SectorEllipse/SectorEllipse.cpp Shapes/SectorEllipse/SectorEllipse.h)