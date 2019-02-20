//
//  DaggerBehaviour.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef DaggerBehaviour_hpp
#define DaggerBehaviour_hpp

#include "IWeaponBehaviour.hpp"

class DaggerBehaviour : public IWeaponBehaviour {
    
public:
    int calculateDamage(int minimum) override;
};

#endif /* DaggerBehaviour_hpp */
