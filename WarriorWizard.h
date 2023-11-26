#ifndef WARRIORWIZARD_H
#define WARRIORWIZARD_H

#include "Warrior.h"
#include "Wizard.h"

class WarriorWizard {
private:
    Warrior warrior;
    Wizard wizard;

public:
    WarriorWizard(const std::string& name, int energy, int strength, int mana)
            : warrior(name, energy, strength), wizard(name, energy, mana) {}

    // Methoden zur Interaktion mit Warrior und Wizard
    // Zum Beispiel Delegationsmethoden
};

#endif // WARRIORWIZARD_H
