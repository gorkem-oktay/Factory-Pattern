//
//  ICharacter.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef ICharacter_hpp
#define ICharacter_hpp

#include "../Equipments/Weapons/IWeapon.hpp"
#include "../Observables/Health.hpp"
#include <map>

class ICharacter {
    
public:
    void setName(string name);
    string getName();
    
    void setType(string type);
    string getType();
    
    void setHealth(Health* health);
    void setHealth(int value);
    Health* getHealth();
    
    void equip(EquipmentSlot slot, string name);
    void unequip(EquipmentSlot slot);
    
    IWeapon* getWeapon();
    void updateEquipment(IEquipment* equipment);
    
    void hit(ICharacter* to);
    
private:
    string name;
    string type;
    Health* health = nullptr;
    
    map<EquipmentSlot, IEquipment*> equipments;
};

#endif /* ICharacter_hpp */
