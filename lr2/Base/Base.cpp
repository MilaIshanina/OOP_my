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

Base::Base(Field *field, int counter)
    :field(field), counter(counter){
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

    if(type == 1)
    {
        Unit *archer = fStrong->CreateArtillerist();//создаем юнита
        unit.emplace_back(archer);//добавляем в вектор
        field->appendElement(x, y, archer);//вставляем в поле
    }
    if(type == 2)
    {
        Unit *magician = fMagic->CreateArtillerist();
        unit.emplace_back(magician);
        field->appendElement(x, y, magician);
    }
    if(type == 3)
    {
        Unit *knightOnHorse = fStrong->CreateCavalryman();
        unit.emplace_back(knightOnHorse);
        field->appendElement(x, y, knightOnHorse);
    }
    if(type == 4)
    {
        Unit *elfOnUnicorn = fMagic->CreateCavalryman();
        unit.emplace_back(elfOnUnicorn);
        field->appendElement(x, y, elfOnUnicorn);
    }
    if(type == 5)
    {
        Unit *knight = fStrong->CreateInfantryman();
        unit.emplace_back(knight);
        field->appendElement(x, y, knight);
    }
    if(type == 6)
    {
        Unit *gnome = fMagic->CreateInfantryman();
        unit.emplace_back(gnome);
        field->appendElement(x, y, gnome);
    }

}



