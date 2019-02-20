//
//  IArmor.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IArmor.hpp"

void IArmor::setProtection(int value){
    protection = value;
}

int IArmor::getProtection(){
    return protection;
}
