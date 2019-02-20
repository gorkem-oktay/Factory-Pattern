//
//  ManaPotion.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "ManaPotion.hpp"

ManaPotion::ManaPotion(){
    name = "Mana Potion";
}

int ManaPotion::cost() {
    return 8;
}
