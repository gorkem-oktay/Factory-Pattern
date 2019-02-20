//
//  IEquipment.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IEquipment.hpp"

void IEquipment::setType(string type){
    this->type = type;
}

string IEquipment::getType(){
    return type;
}

void IEquipment::setSlot(EquipmentSlot slot){
    this->slot = slot;
}

EquipmentSlot IEquipment::getSlot(){
    return slot;
}
