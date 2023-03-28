//
//  Reptile.hpp
//  CS2_Inheritance
//
//  Created by Henry Timmons on 3/27/23.
//

#ifndef Reptile_hpp
#define Reptile_hpp
#include "Animal.hpp"
#include <stdio.h>
class Reptile : public Animal{
public:
    Reptile();
    virtual ~Reptile();
    char scaleType;
    bool venomous;
    
    
};

#endif /* Reptile_hpp */
