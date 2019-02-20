//
//  IArmor.hpp
//  FactoryPattern
//
//  Created by Görkem Oktay on 20.02.2019.
//  Copyright © 2019 Görkem Oktay. All rights reserved.
//

#ifndef IArmor_hpp
#define IArmor_hpp

class IArmor {
    
public:
    void setProtection(int value);
    int getProtection();
    
private:
    int protection;
};

#endif /* IArmor_hpp */
