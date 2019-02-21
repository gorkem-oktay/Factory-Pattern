//
//  HealthBar.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef HealthBar_hpp
#define HealthBar_hpp

#include "IObserver.hpp"
#include <string>

using namespace std;

class HealthBar : public IObserver {

public:
    HealthBar(string name);
    
    void updated(IObservable* observable, void* value) override;
    
private:
    string name;
};

#endif /* HealthBar_hpp */
