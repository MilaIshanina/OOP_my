//
// Created by Mila on 30.05.2020.
//

#ifndef UNTITLED3_COLOR_H
#define UNTITLED3_COLOR_H


class Color {//RGB
private:
    int red;
    int green;
    int blue;
public:
    Color(int red, int green, int blue);
    int getRed() const;
    int getGreen() const;
    int getBlue() const;
};


#endif //UNTITLED3_COLOR_H
