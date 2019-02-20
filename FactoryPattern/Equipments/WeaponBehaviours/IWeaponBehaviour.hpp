//
//  IWeaponBehaviour.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IWeaponBehaviour_hpp
#define IWeaponBehaviour_hpp

class IWeaponBehaviour {
    
public:
    virtual int calculateDamage(int minimum) = 0;
};

#endif /* IWeaponBehaviour_hpp */
