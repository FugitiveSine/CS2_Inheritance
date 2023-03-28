//
//  Mammal.hpp
//  CS2_Inheritance
//
//  Created by Henry Timmons on 3/27/23.
//

#ifndef Mammal_hpp
#define Mammal_hpp
#include "Animal.hpp"
#include "Organ.hpp"
#include "Squirell.hpp"
#include <vector>
#include <iostream>
using namespace std;
#include <stdio.h>
class Mammal : public Animal{
public:
    Mammal();
    virtual ~Mammal();
    
    
protected:
    vector<Organ> theOrgans;
    Organ theOnlyOrgan;//aggregation putting a class in another class
    Organ organ1;
};

#endif /* Mammal_hpp */
