//
//  Water.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef Water_hpp
#define Water_hpp

#include "IngredientDecorator.hpp"

class Water : public IngredientDecorator {
  
public:
    Water(IPotion* potion);
    
    int cost() override;
};

#endif /* Water_hpp */
