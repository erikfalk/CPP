//
//  main.cpp
//  Labor2_Aufgabe2a
//
//  Created by Erik Falk on 22.04.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double trapezFlaeche(double a, double b = 0, double gamma = 90, double c = 0);

int main(int argc, const char * argv[]) {
    
    
    cout << "Fläche Trapez:         " << trapezFlaeche(2.0, 4.0, 45.0, 3.5) << endl;
    cout << "Fläche Parallelogramm: " << trapezFlaeche(2.0, 4.0, 45.0) << endl;
    cout << "Fläche Rechteck:       " << trapezFlaeche(2.0, 4.0) << endl;
    cout << "Fläche Quadrat:        " << trapezFlaeche(2.0) << endl;
    
    return 0;
}

double trapezFlaeche(double a, double b, double gamma, double c){
    
    //Quadrat
    if (b == 0 && c == 0 && gamma == 90)
        return a*a;
    //Rechteck
    else if(c == 0 && gamma == 90)
        return a*b;
    //Parallelogramm
    else if (c == 0)
        return a*b*sin(gamma*M_PI/180);
    //Trapez
    else
        return  0.5*(a+c)*b*sin(gamma*M_PI/180);
}