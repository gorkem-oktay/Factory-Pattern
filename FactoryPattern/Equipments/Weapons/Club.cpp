//
//  Club.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Club.hpp"
#include "../WeaponBehaviours/ClubBehaviour.hpp"

Club::Club(){
    setType("Club");
    setDamage(8);
    setBehaviour(new ClubBehaviour());
    setSlot(EquipmentSlot::TWO_HAND);
}
