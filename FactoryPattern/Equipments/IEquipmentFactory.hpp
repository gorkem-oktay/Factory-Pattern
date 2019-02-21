//
//  IEquipmentFactory.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IEquipmentFactory_hpp
#define IEquipmentFactory_hpp

#include "IEquipment.hpp"

// Abstract Factory
class IEquipmentFactory {
    
public:
    virtual IEquipment* getEquipment(string name) = 0;
    
    static IEquipmentFactory* getFactory(EquipmentSlot slot);
};

#endif /* IEquipmentFactory_hpp */
