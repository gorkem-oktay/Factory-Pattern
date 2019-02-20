//
//  SwordBehaviour.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef SwordBehaviour_hpp
#define SwordBehaviour_hpp

#include "IWeaponBehaviour.hpp"

class SwordBehaviour : public IWeaponBehaviour {
    
public:
    int calculateDamage(int minimum) override;
};

#endif /* SwordBehaviour_hpp */
