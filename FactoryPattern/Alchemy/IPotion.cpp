//
//  IPotion.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IPotion.hpp"

string IPotion::getDescription() {
    
    string ingredients = ingredientNames.size() > 0 ? ingredientNames[0] : "";
    
    for (int i = 1; i < ingredientNames.size(); i++) {
        ingredients += ", " + ingredientNames[i];
    }
    
    return name + ": " + ingredients;
}
