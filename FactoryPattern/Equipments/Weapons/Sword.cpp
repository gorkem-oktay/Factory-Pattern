//
//  Sword.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Sword.hpp"
#include "../WeaponBehaviours/CriticalStrikeBehaviour.hpp"

Sword::Sword(){
    setName("Sword");
    setDamage(10);
    setBehaviour(new CriticalStrikeBehaviour());
    setSlot(EquipmentSlot::RIGHT_HAND);
}
