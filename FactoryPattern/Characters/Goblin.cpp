//
//  Goblin.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Goblin.hpp"
#include "../Observers/HealthBar.hpp"

Goblin::Goblin(){
    setType("Goblin");
    setHealth(60);
    getHealth()->addObserver(new HealthBar(getType()));
}
