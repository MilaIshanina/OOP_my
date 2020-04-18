//
// Created by Mila
//

#include <iostream>
#include "Base.h"



void Base::whatYouName() {
    std::cout<< name;
}

ObjectInterface *Base::copy() {

    return new Base(*this);

}

Base::Base(Field *field, Unit** units, int counter, int controlMax)
    :field(field), units(units), counter(counter), controlMax(controlMax){
    countUnit = 0;
    name = counter;
    fMagic = new ConcreteFactoryMagicHero();
    fStrong = new ConcreteFactoryStrongHero();
}

//type:
//1 - archer
//2- magician
//3 - knightOnHorse
//4 - elfOnUnicorn
//5 - knight
//6 - gnome
 void Base::createUnit(int type, int x, int y) {

    if(countUnit < controlMax)//база контролирует макс кол-во юнитов в базе
    {
        if (type == 1) {
            Unit *archer = fStrong->CreateArtillerist();//создаем юнита
            //unit.emplace_back(archer);//добавляем в вектор
            archer->setNumberInArray(countUnit);
            archer->subscribeObserver(this);
            units[countUnit] = archer;
            countUnit++;
            field->appendElement(x, y, archer);//вставляем в поле
        }
        if (type == 2) {
            Unit *magician = fMagic->CreateArtillerist();
            //unit.emplace_back(magician);
            magician->setNumberInArray(countUnit);
            magician->subscribeObserver(this);
            units[countUnit] = magician;
            countUnit++;
            field->appendElement(x, y, magician);
        }
        if (type == 3) {
            Unit *knightOnHorse = fStrong->CreateCavalryman();
            //unit.emplace_back(knightOnHorse);
            knightOnHorse->setNumberInArray(countUnit);
            knightOnHorse->subscribeObserver(this);
            units[countUnit] = knightOnHorse;
            countUnit++;
            field->appendElement(x, y, knightOnHorse);
        }
        if (type == 4) {
            Unit *elfOnUnicorn = fMagic->CreateCavalryman();
            //unit.emplace_back(elfOnUnicorn);
            elfOnUnicorn->setNumberInArray(countUnit);
            elfOnUnicorn->subscribeObserver(this);
            units[countUnit] = elfOnUnicorn;
            countUnit++;
            field->appendElement(x, y, elfOnUnicorn);
        }
        if (type == 5) {
            Unit *knight = fStrong->CreateInfantryman();
            //unit.emplace_back(knight);
            knight->setNumberInArray(countUnit);
            knight->subscribeObserver(this);
            units[countUnit] = knight;
            countUnit++;
            field->appendElement(x, y, knight);
        }
        if (type == 6) {
            Unit *gnome = fMagic->CreateInfantryman();
            //unit.emplace_back(gnome);
            gnome->setNumberInArray(countUnit);
            gnome->subscribeObserver(this);
            units[countUnit] = gnome;
            countUnit++;
            field->appendElement(x, y, gnome);
        }
    }

}

void Base::handleEvent(unsigned numberInArray) {
    std::cout<<"HANDLEVENT/////////////////////" << std::endl;
    std::cout<< numberInArray << std::endl;
    for (int i = numberInArray; i < countUnit-1; i++) {
        units[i] = units[i+1];

    }
    countUnit--;
}

int Base::getCountUnit() const {
    return countUnit;
}







