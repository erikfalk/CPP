//
//  main.cpp
//  Labor3_2b
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
#include "Point.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Point p(4, 5);
    cout << p.getX() << endl;
    cout << p.print();
    p.move(3,4);
    cout << p.print();
    
    Point * ptr = new Point(7,9);
    double * fpt = new double;
    *fpt = ptr->getX();
    cout << ptr->getX() << endl;
    cout << ptr->print();
    (*ptr).move(3,11);
    ptr->move(3,11);
    cout << ptr->print();
    
    return 0;
    
}
