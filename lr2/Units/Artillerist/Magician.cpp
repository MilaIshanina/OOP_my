//
// Created by Mila on 23.02.2020.
//

#include <iostream>
#include "Magician.h"
#include "../../Base/Base.h"


Magician::Magician() : Artillerist() {
    Artillerist::health = 10;
    Artillerist::armor = 3;
    Artillerist::damage = 3;
    //countShots = 3;
    Artillerist::name = 'M';
}

void Magician::whatYouName() {
    std::cout<< name;

}

ObjectInterface *Magician::copy() {

    return new Magician(*this);

}

Magician::~Magician() {
    observer->handleEvent(numberInArray);

}

