//
//  Dummy.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 22.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Dummy.hpp"
#include "../Observers/HealthBar.hpp"

Dummy::Dummy(){
    setType("Dummy");
    setHealth(1000000);
    getHealth()->addObserver(new HealthBar(getType()));
}
