//
//  IPotion.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IPotion_hpp
#define IPotion_hpp

#include <string>
#include <vector>

using namespace std;

class IPotion {
    
public:
    string name;
    vector<string> ingredientNames;
    
    string getDescription();
    
    virtual int cost() = 0;
};

#endif /* IPotion_hpp */
