//
//  IWeapon.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IWeapon.hpp"

void IWeapon::setDamage(int damage){
    this->damage = damage;
}

int IWeapon::getDamage(){
    return damage;
}

void IWeapon::setBehaviour(IWeaponBehaviour* behaviour){
    this->behaviour = behaviour;
}

IWeaponBehaviour* IWeapon::getBehaviour(){
    return behaviour;
}

int IWeapon::calculateDamage(){
    return getBehaviour()->calculateDamage(getDamage());
}
