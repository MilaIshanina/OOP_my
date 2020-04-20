//
// Created by Mila on 23.02.2020.
//

#include <iostream>
#include "Gnome.h"

Gnome::Gnome(): Infantryman() {
    Infantryman::health = 9;
    Infantryman::armor = 2;
    Infantryman::damage = 2;
    //count//// = 3;
    Infantryman::name = 'G';
}

void Gnome::whatYouName() {
    std::cout<< name;
}

ObjectInterface *Gnome::copy() {
    return new Gnome(*this);
}
