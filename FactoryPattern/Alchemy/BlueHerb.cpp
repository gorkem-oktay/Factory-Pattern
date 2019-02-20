//
//  BlueHerb.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "BlueHerb.hpp"

BlueHerb::BlueHerb(IPotion* potion){
    this->potion = potion;
    this->name = potion->name;
    addIngredientName("Blue Herb");
}

int BlueHerb::cost(){
    return 3 + potion->cost();
}
