//
//  BlueHerb.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef BlueHerb_hpp
#define BlueHerb_hpp

#include "IngredientDecorator.hpp"

class BlueHerb : public IngredientDecorator {
  
public:
    BlueHerb(IPotion* potion);
    
    int cost() override;
};

#endif /* BlueHerb_hpp */
