//
//  IngredientDecorator.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IngredientDecorator_hpp
#define IngredientDecorator_hpp

#include "IPotion.hpp"

class IngredientDecorator : public IPotion {
    
public:
    IPotion* potion;
    
    void addIngredientName(string name);
};

#endif /* IngredientDecorator_hpp */
