//
// Created by Mila
//

#ifndef UNTITLED_BASE_H
#define UNTITLED_BASE_H


#include "../Units/ObjectInterface.h"
#include "../AbstractFactory/AbstractFactory.h"
#include "../AbstractFactory/ConcreteFactoryMagicHero.h"
#include "../AbstractFactory/ConcreteFactoryStrongHero.h"
#include "../Field/Field.h"
#include <vector>

class Base : public ObjectInterface{
private:
    ConcreteFactoryMagicHero* fMagic;
    ConcreteFactoryStrongHero* fStrong;
    std::vector<Unit*> unit;
    Field* field;
    int counter;
public:
    //unsigned countBase = 0;

    void whatYouName() override;
    ObjectInterface* copy() override;
    int name;
    Base(Field* field, int counter);
    void createUnit(int type, int x, int y);

};


#endif //UNTITLED_BASE_H
