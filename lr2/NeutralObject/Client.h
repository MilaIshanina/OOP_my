//
// Created by Mila
//

#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H

#include "Context.h"
#include "MedicalKit.h"
#include "PowerPotion.h"
#include "Shild.h"

class Client: public Context{
public:
    virtual void useStrategy(Unit* unit) override {
        if(dynamic_cast<MedicalKit*>(neutralObject) != nullptr)
        {
            (*neutralObject) + unit->getHealthForUpdate();
        }
        if(dynamic_cast<PowerPotion*>(neutralObject) != nullptr)
        {
            (*neutralObject) + unit->getDamageForUpdate();
        }
        if(dynamic_cast<Shild*>(neutralObject) != nullptr)
        {
            (*neutralObject) + unit->getArmorForUpdate();
        }

    }
    virtual void setStrategy(NeutralObjectInterface* neutralObject) override {
        Client::neutralObject = neutralObject;

    }
};

#endif //UNTITLED_CLIENT_H
