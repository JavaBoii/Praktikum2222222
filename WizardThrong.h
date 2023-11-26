#ifndef WIZARDTHRONG_H
#define WIZARDTHRONG_H

#include <vector>
#include "Wizard.h"

class WizardThrong {
private:
    std::vector<Wizard> wizards;

public:
    void addWizard(const Wizard& wizard) { wizards.push_back(wizard); }
    friend Wizard operator|(WizardThrong& throng1, WizardThrong& throng2);
    // Weitere Methoden und Operatoren, falls erforderlich.
};

#endif // WIZARDTHRONG_H
