//
//  IEquipmentFactory.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IEquipmentFactory.hpp"
#include "Weapons/WeaponFactory.hpp"
#include "Armors/ArmorFactory.hpp"

IEquipmentFactory* IEquipmentFactory::getFactory(EquipmentSlot slot){
    switch (slot) {
        case RIGHT_HAND:
        case LEFT_HAND:
        case TWO_HAND:
            return new WeaponFactory();
        case HEAD:
        case CHEST:
        case LEGS:
        case HAND:
        case FOOT:
            return new ArmorFactory();
        default:
            return nullptr;
    }
}
