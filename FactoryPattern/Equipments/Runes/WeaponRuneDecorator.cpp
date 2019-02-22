//
//  WeaponRuneDecorator.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 22.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "WeaponRuneDecorator.hpp"

WeaponRuneDecorator::WeaponRuneDecorator(IWeapon* weapon){
    this->weapon = weapon;
}

string WeaponRuneDecorator::getName(){
    return weapon->getName();
}

IWeaponBehaviour* WeaponRuneDecorator::getBehaviour(){
    return weapon->getBehaviour();
}

EquipmentSlot WeaponRuneDecorator::getSlot(){
    return weapon->getSlot();
}
