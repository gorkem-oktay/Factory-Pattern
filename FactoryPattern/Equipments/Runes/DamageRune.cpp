//
//  DamageRune.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 22.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "DamageRune.hpp"
#include <iostream>

DamageRune::DamageRune(IWeapon* weapon) : WeaponRuneDecorator(weapon){
    std::cout << "Added Damage Rune to " << getName() << "\n";
}

int DamageRune::getDamage(){
    return weapon->getDamage() + 2;
}
