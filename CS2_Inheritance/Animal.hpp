//
//  Animal.hpp
//  CS2_Inheritance
//
//  Created by Henry Timmons on 3/27/23.
//

#ifndef Animal_hpp
#define Animal_hpp
#include <iostream>
using namespace std;
#include <stdio.h>
struct Date{
    int Year;
    int Month;
    int Day;
};
class Animal{
public:
    Animal();
    virtual ~Animal();
    bool warmBlooded;
    bool furBound;
    int numLimbs;
    double weightIntPounds;
    Date birthDate;
    int longevityYears;
    
    bool eggLaying;
    
    
};
#endif /* Animal_hpp */
