//
//  IObservable.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include "IObservable.hpp"
#include "../Observers/IObserver.hpp"

void IObservable::addObserver(IObserver* observer){
    observers.push_back(observer);
}

void IObservable::notifyAll(void *value){
    for_each(observers.begin(), observers.end(), [this, value](IObserver* observer){
        observer->updated(this, value);
    });
}
