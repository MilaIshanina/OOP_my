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
#include "../Observer/Observer.h"
#include <vector>

class Base : public ObjectInterface, public Observer{
private:
    ConcreteFactoryMagicHero* fMagic;
    ConcreteFactoryStrongHero* fStrong;
    //std::vector<Unit*> unit;
    Field* field;
    int counter;
    Unit** units;
    int countUnit;
public:
    int getCountUnit() const;

private:
//
    int controlMax;//максимальное количество юнитов
    int health;//здоровье

public:
    //unsigned countBase = 0;

    void whatYouName() override;
    ObjectInterface* copy() override;
    int name;
    Base(Field* field, Unit** units, int counter, int controlMax);
    void createUnit(int type, int x, int y);
    void handleEvent(unsigned numberInArray) override;



    //Base(Field *pField, int i);
};


#endif //UNTITLED_BASE_H
