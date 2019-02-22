//
//  DaggerBehaviour.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "DaggerBehaviour.hpp"
#include <iostream>

int DaggerBehaviour::calculateDamage(int minimum){
    int isDoubleStrike = rand() % 100 + 1;
    
    if (isDoubleStrike > 30)
    {
        std::cout << "Double Strike!!!";
        return minimum * 2;
    }
    
    return minimum;
}
