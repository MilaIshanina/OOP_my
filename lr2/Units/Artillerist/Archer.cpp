//
// Created by Mila
//

#include <iostream>
#include "Archer.h"
#include "../../Base/Base.h"


Archer::Archer() : Artillerist() {
    Artillerist::health = 10;
    Artillerist::armor = 3;
    Artillerist::damage = 3;
    //countShots = 2;
    Artillerist::name = 'A';
}



void Archer::whatYouName() {
    std::cout<< name;
}

ObjectInterface *Archer::copy() {

    return new Archer(*this);

}

Archer::~Archer() {
    std::cout<<"ARCHER" << std::endl;
    observer->handleEvent(numberInArray);

}



