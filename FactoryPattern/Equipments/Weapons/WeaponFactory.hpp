//
//  WeaponFactory.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef WeaponFactory_hpp
#define WeaponFactory_hpp

#include "../IEquipmentFactory.hpp"

class WeaponFactory : public IEquipmentFactory {
    
public:
    IEquipment* getEquipment(string name) override;
};

#endif /* WeaponFactory_hpp */
