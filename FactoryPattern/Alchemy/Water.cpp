//
//  Water.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Water.hpp"

Water::Water(IPotion* potion){
    this->potion = potion;
    this->name = potion->name;
    addIngredientName("Water");
}

int Water::cost(){
    return 1 + potion->cost();
}
