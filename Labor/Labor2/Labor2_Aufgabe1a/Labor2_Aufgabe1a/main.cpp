//
//  main.cpp
//  Labor2_Aufgabe1a
//
//  Created by Erik Falk on 21.04.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct complex{
    double real, img;
    };

double square (double);
complex square (complex);

int main(int argc, const char * argv[]) {
    
    double zReal = 5.0;
    complex zComplex = {.real = 4.0, .img = 3.0};
    
    //Ausgabe und Berechnung der reelen Zahl
    cout << "reele Zahl" << endl;
    cout << "Zahl: " << zReal << " Quadrat: "
         << square(zReal) << endl << endl;
    
    //Ausgabe und Berechnung der komplexen Zahl
    cout << "komplexe Zahl" << endl;
    cout << "Zahl: " << zComplex.real
         << showpos <<  zComplex.img << "i" <<endl;
    cout << "Quadrat: ";
    zComplex = square(zComplex);
    cout << zComplex.real << zComplex.img << "i" << endl;
    
    return 0;
}

double square(double x){
    
    return x*x;
}

complex square(complex mComplex){
    
    double a = mComplex.real, b = mComplex.img;
    
    //Berechnung des reellen Anteil
    mComplex.real = (a*a-b*b);

    //Berechnung des imaginären Anteil
    mComplex.img = 2*a*b;
    
    return mComplex;
    
}