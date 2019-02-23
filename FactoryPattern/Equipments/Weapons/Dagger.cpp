//
//  Dagger.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Dagger.hpp"
#include "../WeaponBehaviours/DoubleStrikeBehaviour.hpp"

Dagger::Dagger(){
    setName("Dagger");
    setDamage(4);
    setBehaviour(new DoubleStrikeBehaviour());
    setSlot(EquipmentSlot::RIGHT_HAND);
}
