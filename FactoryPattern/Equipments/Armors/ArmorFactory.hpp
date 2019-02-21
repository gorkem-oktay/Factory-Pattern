//
//  ArmorFactory.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef ArmorFactory_hpp
#define ArmorFactory_hpp

#include "../IEquipmentFactory.hpp"

class ArmorFactory : public IEquipmentFactory {
    
public:
    IEquipment* getEquipment(string name);
};

#endif /* ArmorFactory_hpp */
