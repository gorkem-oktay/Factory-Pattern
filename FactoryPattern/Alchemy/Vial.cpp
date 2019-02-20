//
//  Vial.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Vial.hpp"

Vial::Vial(IPotion* potion){
    this->potion = potion;
    this->name = potion->name;
    addIngredientName("Vial");
}

int Vial::cost(){
    return 4 + potion->cost();
}
