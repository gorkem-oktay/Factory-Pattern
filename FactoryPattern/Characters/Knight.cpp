//
//  Knight.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 21.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Knight.hpp"
#include "../Observers/HealthBar.hpp"

Knight::Knight() {
    setType("Knight");
    setHealth(100);
    getHealth()->addObserver(new HealthBar(getType()));
}
