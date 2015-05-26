//
//  Point.cpp
//  Labor3_2
//
//  Created by Erik Falk on 26.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include "Point.hpp"


//Konstruktoren
Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(double a, double b){
    x = a;
    y = b;
};


void Point::move(double dx, double dy){
    x += dx;
    y += dy;
}

std::string Point::print(bool vorschub){