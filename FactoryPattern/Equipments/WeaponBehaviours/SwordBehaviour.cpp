//
//  SwordBehaviour.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "SwordBehaviour.hpp"
#include <iostream>

int SwordBehaviour::calculateDamage(int minimum){
    
    int isCriticalStrike = rand() % 100 + 1;
    
    if (isCriticalStrike > 70)
    {
        std::cout << "Critical Strike!!!\n";
        return minimum * 3;
    }
    
    return minimum;
}
