#ifndef WIZARD_H
#define WIZARD_H

#include "LivingThing.h"
#include "Warrior.h"
#include <iostream>

class Wizard : public LivingThing {
protected:
    int mana;

public:
    Wizard(const std::string& name, int energy, int mana)
            : LivingThing(name, energy), mana(mana) {}

    int getMana() const { return mana; }
    void setMana(int newMana) { mana = newMana; }

    void operator>>(Warrior& warrior) const;
    void operator>>(Wizard& otherWizard);
};

#endif // WIZARD_H
