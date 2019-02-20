//
//  GreenHerb.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "GreenHerb.hpp"

GreenHerb::GreenHerb(IPotion* potion){
    this->potion = potion;
    this->name = potion->name;
    addIngredientName("Green Herb");
}

int GreenHerb::cost(){
    return 2 + potion->cost();
}
