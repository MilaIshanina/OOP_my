//
// Created by Mila
//

#include <iostream>
#include "Archer.h"
#include "../../Base/Base.h"


Archer::Archer() : Artillerist() {
    Artillerist::health = 100;
    Artillerist::armor = 80;
    Artillerist::damage = 45;
    //countShots = 2;
    Artillerist::name = 'A';
}



char Archer::whatYouName() {
    return name;
}

ObjectInterface *Archer::copy() {

    return new Archer(*this);

}

Archer::~Archer() {
    std::cout<<"ARCHER" << std::endl;
    observer->handleEvent(numberInArray);

}



