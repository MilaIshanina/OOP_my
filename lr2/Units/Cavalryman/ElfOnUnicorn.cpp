//
// Created by Mila on 23.02.2020.
//

#include <iostream>
#include "ElfOnUnicorn.h"
#include "../../Base/Base.h"

ElfOnUnicorn::ElfOnUnicorn(): Cavalryman() {
    Cavalryman::health = 9;
    Cavalryman::armor = 2;
    Cavalryman::damage = 2;
    //countSteps = 3;
    Cavalryman::name = 'E';
}

void ElfOnUnicorn::whatYouName() {
    std::cout<< name;
}

ObjectInterface *ElfOnUnicorn::copy() {
    return new ElfOnUnicorn(*this);
}

ElfOnUnicorn::~ElfOnUnicorn() {
    observer->handleEvent(numberInArray);

}
