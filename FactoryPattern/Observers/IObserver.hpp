//
//  IObserver.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IObserver_hpp
#define IObserver_hpp

class IObservable;

class IObserver {
  
public:
    
    virtual void updated(IObservable* observable, void* value) = 0;
};

#endif /* IObserver_hpp */
