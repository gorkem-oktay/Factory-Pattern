//
//  HealthPotion.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef HealthPotion_hpp
#define HealthPotion_hpp

#include "IPotion.hpp"

class HealthPotion : public IPotion {
    
public:
    HealthPotion();
    
    int cost() override;
};

#endif /* HealthPotion_hpp */
