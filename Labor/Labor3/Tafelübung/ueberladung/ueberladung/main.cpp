//
//  main.cpp
//  ueberladung
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <string>

class Integer{
public:
    int zahl;
    
    Integer operator+(Integer zahl){
        Integer tmp;
        tmp.zahl = this->zahl - zahl.zahl;
        return tmp;
    }
};


int main(int argc, const char * argv[]) {
    Integer z1, z2, z3;
    
    z1.zahl = 3;
    z2.zahl = 5;
    
    z3 = z2+z1;
    std::cout << z3.zahl;
    return 0;
}
