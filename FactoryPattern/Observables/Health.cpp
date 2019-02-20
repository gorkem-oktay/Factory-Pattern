//
//  Health.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "Health.hpp"

Health::Health(int value){
    this->value = value;
}

int Health::getValue(){
    return value;
}

void Health::decrease(int value){
    this->value -= value;
    notifyAll((void*)value);
}
