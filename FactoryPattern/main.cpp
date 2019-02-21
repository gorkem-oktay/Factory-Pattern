//
//  main.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include <iostream>
#include "Alchemy/Headers.hpp"
#include "Characters/Headers.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    ICharacter* ourKnight = new Knight();
    ourKnight->setName("Zafiru");
    ourKnight->equip(RIGHT_HAND, "Dagger");
    
    cout << ourKnight->getName() << ", travels across countries to live an adventures life...\n";
    
    ICharacter* evilGoblin = new Goblin();
    evilGoblin->equip(TWO_HAND, "Club");
    
    cout << "Then suddenly a " << evilGoblin->getType() << " appears.\n";
    cout << "And attacks " << ourKnight->getName() << "\n";
    
    evilGoblin->hit(ourKnight);
    
    cout << ourKnight->getName() << " tries to fight back\n";
    
    ourKnight->hit(evilGoblin);
    
    cout << "But he couldn't inflict much damage\n";
    cout << "then he saw a sword on the ground and grabs it\n";
    
    ourKnight->unequip(RIGHT_HAND);
    ourKnight->equip(RIGHT_HAND, "Sword");
    
    cout << "And fearlessly attacks " + evilGoblin->getType() << "\n";
    
    ourKnight->hit(evilGoblin);
    
    cout << "\n";
    cout << "After defeating " << evilGoblin->getType() << "\n";
    cout << ourKnight->getName() << " stops at a store to buy some Health Potion\n";
    cout << "And shopkeeper tells its cost as\n";
    cout << "\n";
    
    IPotion* potionHealth = new HealthPotion();
    potionHealth = new Vial(potionHealth);
    potionHealth = new GreenHerb(potionHealth);
    potionHealth = new Water(potionHealth);
    
    cout << potionHealth->getDescription() << "\n";
    printf("Cost: %i\n", potionHealth->cost());
    
    IPotion* potionMana = new ManaPotion();
    potionMana = new Vial(potionMana);
    potionMana = new BlueHerb(potionMana);
    potionMana = new Water(potionMana);
    
    cout << potionMana->getDescription() << "\n";
    printf("Cost: %i\n", potionMana->cost());
    
    cout << "\n";
    cout << "Then he goes to the blacksmith to get his helmet back from repair\n";
    cout << "It was finished and he immidiately tries it to see how it was done\n";
    
    ourKnight->equip(HEAD, "Helmet");
    
    return 0;
}
