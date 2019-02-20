//
//  GreenHerb.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef GreenHerb_hpp
#define GreenHerb_hpp

#include "IngredientDecorator.hpp"

class GreenHerb : public IngredientDecorator {
  
public:
    GreenHerb(IPotion* potion);
    
    int cost() override;
};

#endif /* GreenHerb_hpp */
