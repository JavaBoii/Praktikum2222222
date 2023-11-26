#include <iostream>
#include <vector>
#include "Warrior.h"
#include "Wizard.h"
#include "WarriorWizard.h"
#include "NPC.h"
#include "Plant.h"
#include "WizardThrong.h"

int main() {
    // Erstellen der Charaktere
    Warrior warrior1("Conan", 100, 50);
    Warrior warrior2("Xena", 90, 45);
    Wizard wizard1("Gandalf", 100, 300);
    Wizard wizard2("Merlin", 80, 250);
    NPC npc("Goblin", 30, true);
    Plant plant("Tree", 10);

    // Demonstration des Kampfes zwischen Kriegern
    std::cout << "Kampf: " << warrior1.getName() << " vs " << warrior2.getName() << std::endl;
    warrior1 >> warrior2;
    std::cout << warrior1 << std::endl;
    std::cout << warrior2 << std::endl;

    // Demonstration des Kampfes zwischen Magiern
    std::cout << "Duell der Magier: " << wizard1.getName() << " vs " << wizard2.getName() << std::endl;
    wizard1 >> wizard2;

    // Warrior gegen NPC
    std::cout << "Kampf: " << warrior1.getName() << " vs NPC" << std::endl;
    warrior1 >> npc;
    std::cout << warrior1 << std::endl;
    std::cout << "NPC Energie: " << npc.getEnergy() << std::endl;

    // Wizard gegen Warrior
    std::cout << "Magischer Angriff: " << wizard1.getName() << " vs " << warrior1.getName() << std::endl;
    wizard1 >> warrior1;
    std::cout << warrior1 << std::endl;

    // Erstellen einer Gruppe von Magiern (WizardThrong)
    WizardThrong throng1, throng2;
    throng1.addWizard(wizard1);
    throng2.addWizard(wizard2);

    // Kombination der Magiergruppen zu einem mächtigen Magier
    std::cout << "Zusammenführung der Magiergruppen..." << std::endl;
    Wizard combinedWizard = throng1 | throng2;
    std::cout << "Der neue Magier: " << combinedWizard.getName() << ", Mana: " << combinedWizard.getMana() << ", Energie: " << combinedWizard.getEnergy() << std::endl;

    // Abschließende Auseinandersetzung
    std::cout << "\n=== Abschließende Auseinandersetzung ===" << std::endl;

    // Der mächtige Magier trifft auf die verbliebenen Krieger
    std::cout << "Der mächtige Magier " << combinedWizard.getName() << " trifft auf die Krieger " << warrior1.getName() << " und " << warrior2.getName() << std::endl;
    combinedWizard >> warrior1;
    combinedWizard >> warrior2;

    // Ausgabe der finalen Zustände
    std::cout << warrior1 << std::endl;
    std::cout << warrior2 << std::endl;

    // Finale Konfrontation zwischen den Kriegern
    std::cout << "\nFinale Konfrontation zwischen den Kriegern:" << std::endl;
    warrior1 >> warrior2;
    warrior2 >> warrior1;

    // Endzustände ausgeben
    std::cout << warrior1 << std::endl;
    std::cout << warrior2 << std::endl;

    std::cout << "\nDas Ende des großen Kampfes. Die Legenden leben weiter in den Geschichten." << std::endl;

    return 0;
}
