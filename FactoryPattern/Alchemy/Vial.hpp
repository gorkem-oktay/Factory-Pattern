//
//  Vial.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef Vial_hpp
#define Vial_hpp

#include "IngredientDecorator.hpp"

class Vial : public IngredientDecorator {

public:
    Vial(IPotion* potion);
    
    int cost() override;
};

#endif /* Vial_hpp */
