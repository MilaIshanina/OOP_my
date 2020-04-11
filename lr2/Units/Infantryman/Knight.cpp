//
// Created by Mila on 23.02.2020.
//

#include <iostream>
#include "Knight.h"

Knight::Knight(): Infantryman() {
    Infantryman::health = 9;
    Infantryman::armor = 2;
    Infantryman::damage = 2;
    //count//// = 3;
    Knight::name = 'K';
}

void Knight::whatYouName() {
    std::cout<< name;
}

ObjectInterface *Knight::copy() {
    return new Knight(*this);
}
