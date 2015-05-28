//
//  Circle.hpp
//  Labor3_2a
//
//  Created by Erik Falk on 27.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//


#ifndef Labor3_2a_Circle_hpp
#define Labor3_2a_Circle_hpp

#include<iostream>
#include"Point.hpp"


class Circle{
private:
    double radius;
    Point centre;
        
public:
    //Konstruktor
    Circle(Point = {0,0}, double = 0);
        
    //setter
    void setCenter(Point);
    void setRadius(double);
        
    //getter
    Point getCentre() const;
    double getRadius() const;
        
    //Methoden
    void move(double, double);
    std::string print(bool = true) const;
    };

#endif
