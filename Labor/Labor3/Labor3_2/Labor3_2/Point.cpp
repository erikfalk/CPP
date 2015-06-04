//
//  Point.cpp
//  Labor3_2
//
//  Created by Erik Falk on 26.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

//Point.cpp
#include "Point.hpp"
#include <string>

using namespace std;

//Konstruktor
Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

//setter
void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}

//getter
double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}

//Methoden
//move
void Point::move(double dx, double dy){
    setX(getX() + dx);
    setY(getY() + dy);
}

//print
string Point::print(bool vorschub) const{
    
    string koordinaten;
    if(vorschub == true)
        return koordinaten = "(" + to_string(getX()) + "," + to_string(getY())+ ")\n";
    
    return koordinaten = "(" + to_string(getX()) + "," + to_string(getY()) + ")";
}

