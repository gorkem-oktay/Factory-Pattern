//
//  IObservable.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IObservable_hpp
#define IObservable_hpp

#include <vector>

using namespace std;

class IObserver;

class IObservable {
    
public:
    vector<IObserver*> observers;
    
    void addObserver(IObserver* observer);
    void notifyAll(void* value);
};

#endif /* IObservable_hpp */
