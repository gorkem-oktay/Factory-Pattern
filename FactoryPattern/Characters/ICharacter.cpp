//
//  ICharacter.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "ICharacter.hpp"
#include "../Equipments/IEquipmentFactory.hpp"
#include "../Equipments/Weapons/IWeapon.hpp"
#include <iostream>

void ICharacter::setName(string name){
    this->name = name;
}

string ICharacter::getName(){
    return name;
}

void ICharacter::setType(string type){
    this->type = type;
}

string ICharacter::getType(){
    return type;
}

void ICharacter::setHealth(Health* health){
    this->health = health;
}

void ICharacter::setHealth(int value){
    if (health) {
        this->health->setValue(value);
    } else {
        this->health = new Health(value);
    }
}

Health* ICharacter::getHealth(){
    return health;
}

void ICharacter::equip(EquipmentSlot slot, string name){
    /*
     ICharacter doesn't know or care about the equipment itself.
     It doesn't need to know even if it is a weapon or an armor.
     It just gets the equipment and assigns it to corresponding slot.
     */
    IEquipmentFactory* factory = IEquipmentFactory::getFactory(slot);
    IEquipment* equipment = factory->getEquipment(name);
    
    if (equipment->getSlot() != slot) {
        cout << "Can't equip item to that slot\n";
        return;
    }
    
    pair<map<EquipmentSlot, IEquipment*>::iterator, bool> result;
    result = equipments.insert(pair<EquipmentSlot, IEquipment*>(slot, equipment));
    
    if (result.second) {
        cout << equipment->getName() << " is equipped\n";
    } else {
        cout << "\nAn item is already equipped in that slot\n";
    }
}

void ICharacter::unequip(EquipmentSlot slot){
    equipments.erase(slot);
    cout << "Item unequipped\n";
}

void ICharacter::hit(ICharacter* to){
    auto iterator = find_if(equipments.begin(), equipments.end(), [](pair<EquipmentSlot, IEquipment*> item) {
        return item.second->getSlot() == TWO_HAND || item.second->getSlot() == RIGHT_HAND;
    });
    
    IWeapon* weapon = nullptr;
    if (iterator != equipments.end()) {
        weapon = (IWeapon*) iterator->second;
    }
    
    if(weapon != nullptr) {
        int damage = weapon->calculateDamage();
        to->getHealth()->decrease(damage);
    } else {
        cout << "No equipped weapon\n";
    }
}
