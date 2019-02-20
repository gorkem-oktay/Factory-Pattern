//
//  ManaPotion.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef ManaPotion_hpp
#define ManaPotion_hpp

#include "IPotion.hpp"

class ManaPotion : public IPotion {
    
public:
    ManaPotion();
    
    int cost() override;
};

#endif /* ManaPotion_hpp */
