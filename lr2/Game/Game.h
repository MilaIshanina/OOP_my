//
// Created by Mila on 11.04.2020.
//

#ifndef UNTITLED_GAME_H
#define UNTITLED_GAME_H


#include "../Field/Field.h"
#include "../Base/Base.h"

class Game {
Field* field;
Base* base;
Unit** units;//храним массив указателей юнитов
int counter;
public:
    Game();

    ~Game();

};



#endif //UNTITLED_GAME_H
