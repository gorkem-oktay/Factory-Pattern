//
//  Troll.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Troll.hpp"
#include "../Observers/HealthBar.hpp"

Troll::Troll(){
    setType("Troll");
    setHealth(140);
    getHealth()->addObserver(new HealthBar(getType()));
}
