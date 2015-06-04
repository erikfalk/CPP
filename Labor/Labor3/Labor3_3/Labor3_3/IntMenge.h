//
//  IntMenge.h
//  Labor3_3
//
//  Created by Erik Falk on 30.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

//IntMenge.h
#ifndef __Labor3_3__IntMenge__
#define __Labor3_3__IntMenge__

#include <stdio.h>
#include <vector>

using namespace std;

class IntMenge{
private:
    vector<int> vec;
    
    //private Methode
    int finden(int) const;

public:
    
    //Konstruktor
    IntMenge();
    //Methoden
    void hinzufuegen(int);
    void entfernen(int);
    bool istMitglied(int);
    int size() const;
    void anzeigen() const;
    void loeschen();
    int getMax();
    int getMin();
    
};

#endif /* defined(__Labor3_3__IntMenge__) */
