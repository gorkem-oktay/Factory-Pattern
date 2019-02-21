//
//  Health.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef Health_hpp
#define Health_hpp

#include "IObservable.hpp"

class Health : public IObservable {
  
public:
    Health();
    Health(int value);
    
    void setValue(int value);
    int getValue();
    
    void decrease(int value);
    
private:
    int value;
};

#endif /* Health_hpp */
