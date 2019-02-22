//
//  ArmorFactory.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "ArmorFactory.hpp"
#include "Helmet.hpp"
#include "Cuirass.hpp"
#include "Pauldron.hpp"
#include "Gauntlet.hpp"
#include "Greave.hpp"

// Factory Method
IEquipment* ArmorFactory::getEquipment(string name){
    if (name == "Helmet") {
        return new Helmet();
    } else if (name == "Cuirass") {
        return new Cuirass();
    } else if (name == "Pauldron") {
        return new Pauldron();
    } else if (name == "Gauntlet") {
        return new Gauntlet();
    } else if (name == "Greave") {
        return new Greave();
    } else {
        return nullptr;
    }
}
