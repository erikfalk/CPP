//
//  Point.hpp
//  Labor3_2
//
//  Created by Erik Falk on 26.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#ifndef __Labor3_2__Point__
#define __Labor3_2__Point__

#include <iostream>

class Point{
private:
    double x, y;

public:
    //Konstruktor
    Point(double = 0, double = 0 );
    
    //setter
    void setX(double);
    void setY(double);
    
    //getter
    double getX() const;
    double getY() const;
    
    //Methoden
    void move(double, double);
    std::string print(bool = true) const;
};

#endif /* defined(__Labor3_2__Point__) */
