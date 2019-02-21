//
//  WeaponFactory.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "WeaponFactory.hpp"
#include "Sword.hpp"
#include "Dagger.hpp"
#include "Club.hpp"

// Factory Method
IEquipment* WeaponFactory::getEquipment(string name){
    if (name == "Sword") {
        return new Sword();
    } else if (name == "Dagger") {
        return new Dagger();
    } else if (name == "Club") {
        return new Club();
    } else {
        return nullptr;
    }
}
