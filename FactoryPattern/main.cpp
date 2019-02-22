//
//  main.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include <iostream>
#include "Characters/Headers.hpp"
#include "Equipments/Runes/DamageRune.hpp"

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
    cout << ourKnight->getName() << " stops at the blacksmith to upgrade his sword\n";
    cout << "Then buys three damage rune and goes to training ground to test them\n";
    cout << "\n";
    
    ICharacter* dummy = new Dummy();
    
    // Decorator usage
    ourKnight->updateEquipment(new DamageRune(ourKnight->getWeapon()));
    ourKnight->hit(dummy);
    ourKnight->updateEquipment(new DamageRune(ourKnight->getWeapon()));
    ourKnight->hit(dummy);
    ourKnight->updateEquipment(new DamageRune(ourKnight->getWeapon()));
    ourKnight->hit(dummy);
    
    cout << "\n";
    cout << "After testing his new sword returns to the blacksmith to get his helmet back from repair\n";
    cout << "It was finished and he immidiately tries it to see how it was done\n";
    
    ourKnight->equip(HEAD, "Helmet");
    
    return 0;
}
