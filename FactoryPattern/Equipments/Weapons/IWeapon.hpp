//
//  IWeapon.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IWeapon_hpp
#define IWeapon_hpp

#include "../IEquipment.hpp"
#include "../WeaponBehaviours/IWeaponBehaviour.hpp"

class IWeapon : public IEquipment {
  
public:
    void setDamage(int damage);
    virtual int getDamage();
    
    void setBehaviour(IWeaponBehaviour* behaviour);
    virtual IWeaponBehaviour* getBehaviour();
    
    int calculateDamage();
    
private:
    int damage;
    IWeaponBehaviour* behaviour;
};

#endif /* IWeapon_hpp */
