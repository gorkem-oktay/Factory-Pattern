//
//  Dagger.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Dagger.hpp"
#include "../WeaponBehaviours/DaggerBehaviour.hpp"

Dagger::Dagger(){
    setName("Dagger");
    setDamage(4);
    setBehaviour(new DaggerBehaviour());
    setSlot(EquipmentSlot::RIGHT_HAND);
}
