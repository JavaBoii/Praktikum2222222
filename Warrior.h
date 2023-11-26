#ifndef WARRIOR_H
#define WARRIOR_H

#include "LivingThing.h"
#include "NPC.h"

class Warrior : public LivingThing {
protected:
    int strength;

public:
    Warrior(const std::string& name, int energy, int strength)
            : LivingThing(name, energy), strength(strength) {}

    int getStrength() const { return strength; }
    void setStrength(int newStrength) { strength = newStrength; }

    // Deklariere den Operator >>
    void operator>>(NPC& npc);
    void operator>>(Warrior& otherWarrior);

    // Ergänze die Klasse um einen Freund-Deklaration für den Operator <<
    friend std::ostream& operator<<(std::ostream& os, const Warrior& warrior);
};

#endif // WARRIOR_H
