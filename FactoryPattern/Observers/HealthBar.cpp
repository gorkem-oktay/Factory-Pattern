//
//  HealthBar.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "HealthBar.hpp"
#include "../Observables/Health.hpp"
#include <iostream>

HealthBar::HealthBar(string name){
    this->name = name;
}

void HealthBar::updated(IObservable *observable, void* value){
    if (typeid(observable) == typeid(Health)) {
        Health* health = (Health*)observable;
        int mValue = (int)(size_t)value;
        cout << name << " received " << to_string(mValue) << " damage and " << to_string(health->getValue());
    }
}
