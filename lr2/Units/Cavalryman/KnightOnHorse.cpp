//
// Created by Mila on 23.02.2020.
//

#include <iostream>
#include "KnightOnHorse.h"
#include "../../Base/Base.h"

KnightOnHorse::KnightOnHorse(): Cavalryman() {
    Cavalryman::health = 11;
    Cavalryman::armor = 2;
    Cavalryman::damage = 2;
    //countSteps = 2;
    Cavalryman::name = 'H';
}
void KnightOnHorse::whatYouName() {
    std::cout << name;
}

ObjectInterface *KnightOnHorse::copy() {
    return new KnightOnHorse(*this);
}

KnightOnHorse::~KnightOnHorse() {
    observer->handleEvent(numberInArray);

}
