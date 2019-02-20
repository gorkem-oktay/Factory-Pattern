//
//  main.cpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#include <iostream>
#include "Alchemy/Headers.hpp"
#include "Observables/IObservable.hpp"
#include "Observers/IObserver.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "\n";
    cout << "After defeating";
    cout << " stops at a store to buy some Health Potion";
    cout << "And shopkeeper tells its cost as";
    cout << "\n";
    
    IPotion* potion = new HealthPotion();
    potion = new Vial(potion);
    potion = new BlueHerb(potion);
    potion = new Water(potion);
    
    cout << potion->getDescription() << "\n";
    printf("Cost: %i\n", potion->cost());
    
    return 0;
}
