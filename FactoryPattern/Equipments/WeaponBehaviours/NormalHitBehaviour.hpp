//
//  ClubBehaviour.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef ClubBehaviour_hpp
#define ClubBehaviour_hpp

#include "IWeaponBehaviour.hpp"

class NormalHitBehaviour : public IWeaponBehaviour {
    
public:
    int calculateDamage(int minimum) override;
};

#endif /* ClubBehaviour_hpp */
