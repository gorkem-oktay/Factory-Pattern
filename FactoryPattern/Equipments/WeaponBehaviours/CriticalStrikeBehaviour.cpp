//
//  SwordBehaviour.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "CriticalStrikeBehaviour.hpp"
#include <iostream>

int CriticalStrikeBehaviour::calculateDamage(int minimum){
    
    int isCriticalStrike = rand() % 100 + 1;
    
    if (isCriticalStrike > 70)
    {
        std::cout << "Critical Strike!!!\n";
        return minimum * 3;
    }
    
    return minimum;
}
