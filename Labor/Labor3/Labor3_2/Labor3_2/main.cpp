//
//  main.cpp
//  Labor3_2
//
//  Created by Erik Falk on 26.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

//main.cpp
#include <iostream>
#include <string>
#include "Point.hpp"
#include "Circle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Point p(1.3, 1.4);
    cout << p.print();
    Circle c(p, 0.5);
    cout << c.print();
    c.move(1.7, 1.6);
    cout << c.print();
    
    Circle d;
    cout << d.print();
   
    return 0;
}
