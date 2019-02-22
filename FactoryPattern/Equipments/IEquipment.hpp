//
//  IEquipment.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IEquipment_hpp
#define IEquipment_hpp

#include <string>

using namespace std;

enum EquipmentSlot {
  
    RIGHT_HAND,
    LEFT_HAND,
    TWO_HAND,
    HEAD,
    CHEST,
    LEGS,
    HAND,
    FOOT
};

class IEquipment {
    
public:
    void setName(string name);
    virtual string getName();
    
    void setSlot(EquipmentSlot slot);
    virtual EquipmentSlot getSlot();
    
private:
    string name = "Unknow Item";
    EquipmentSlot slot;
};

#endif /* IEquipment_hpp */
