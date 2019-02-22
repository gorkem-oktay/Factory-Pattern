//
//  DamageRune.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 22.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef DamageRune_hpp
#define DamageRune_hpp

#include "WeaponRuneDecorator.hpp"

// Decorater concrete class
class DamageRune : public WeaponRuneDecorator {
    
public:
    DamageRune(IWeapon* weapon);
    
    int getDamage() override;
};

#endif /* DamageRune_hpp */
