//
//  HealthPotion.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "HealthPotion.hpp"

HealthPotion::HealthPotion(){
    name = "Health Potion";
}

int HealthPotion::cost(){
    return 8;
}
