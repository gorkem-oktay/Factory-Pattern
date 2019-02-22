//
//  WeaponRuneDecorator.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 22.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef WeaponRuneDecorator_hpp
#define WeaponRuneDecorator_hpp

#include "../Weapons/IWeapon.hpp"

// Decorater interface
class WeaponRuneDecorator : public IWeapon {
    
public:
    WeaponRuneDecorator(IWeapon* weapon);
    
    IWeapon* weapon;
    
    string getName() override;
    IWeaponBehaviour* getBehaviour() override;
    EquipmentSlot getSlot() override;
};

#endif /* WeaponRuneDecorator_hpp */
