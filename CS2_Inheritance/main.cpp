//
//  main.cpp
//  CS2_Inheritance
//
//  Created by Henry Timmons on 3/27/23.
//
/*
 parent = private
 then children, has no access to the parent no matter what the access specifier is
 sub-child, no access
 
 Parent = proteceted\
 children, can see parents protected data (public), turns the public into protected
 sub-child, same
 
 Parent = public
 child, nothing will change because public is the smallest in the heiracrchy
 sub-child
 */
#include <iostream>
#include "Mammal.hpp"
#include "Reptile.hpp"
#include "Organ.hpp"//not needed but helps document the code

int main(int argc, const char * argv[]) {
    
    Mammal peppaThePig;
    peppaThePig.furBound = true;
    peppaThePig.warmBlooded = true;
    
    Reptile komodoDragon;
    komodoDragon.venomous = true;
    komodoDragon.warmBlooded = false;
    komodoDragon.furBound = false;
    
    Organ x;
    x.name = "Heart";
    peppaThePig.theOrgans.push_back(x);
    x.name = "Lungs";
    peppaThePig.theOrgans.push_back(x);
    x.name = "Pancreas";
    peppaThePig.theOrgans.push_back(x);

    
    
    std::cout << "Hello, World!\n";
    return 0;
}
