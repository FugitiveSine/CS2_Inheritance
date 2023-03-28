//
//  Organ.hpp
//  CS2_Inheritance
//
//  Created by Henry Timmons on 3/27/23.
//

#ifndef Organ_hpp
#define Organ_hpp
#include <iostream>
#include <stdio.h>
class Organ{
public:
    Organ();
    virtual ~Organ();
    
    std::string name;
    float bloodQty;
    
};

#endif /* Organ_hpp */
