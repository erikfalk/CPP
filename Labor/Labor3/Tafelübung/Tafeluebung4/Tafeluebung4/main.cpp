//
//  main.cpp
//  Tafeluebung4
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include "MathArray.hpp"

int main(int argc, const char * argv[]) {
    int size;
    
    cout << "Wie gross soll das Feld sein?" << endl;
    cin >> size;
    
    MathArray<double> aD(size);
    
    aD.einlesen();
    cout << "Mittelwert: " << aD.mittelwert() << endl;
    aD.ausgeben();
    
    return 0;
}
