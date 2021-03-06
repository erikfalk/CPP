//
//  Circle.cpp
//  Labor3_2a
//
//  Created by Erik Falk on 27.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

//Circle.cpp
#include <iostream>
#include <string>
#include "Circle.hpp"
#include "Point.hpp"

using namespace std;

//Konstruktor
Circle::Circle(Point centre, double radius){
    this->centre = centre;
    this->radius = radius;
}

//setter
void Circle::setCenter(Point centre){
    this->centre = centre;
}

void Circle::setRadius(double radius){
    this->radius = radius;
}

//getter
Point Circle::getCentre() const{
    return centre;
}

double Circle::getRadius() const{
    return radius;
}

//Methoden
void Circle::move(double dx, double dy){
    centre.move(dx, dy);
}

string Circle::print(bool vorschub) const{
    string koordinaten;
    if(vorschub == true)
        return koordinaten = "<" + getCentre().print(false) + "," + to_string(getRadius()) + ">\n";
    return koordinaten = "<" + getCentre().print(false) + "," + to_string(getRadius()) + ">";

}

