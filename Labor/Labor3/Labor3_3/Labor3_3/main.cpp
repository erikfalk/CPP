//
//  main.cpp
//  Labor3_3
//
//  Created by Erik Falk on 30.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <vector>
#include "IntMenge.h"

using namespace std;

int main(int argc, char *argv[]){
    
    IntMenge menge;
    
    cout << "fuege Elemente von 5 bis -2 hinzu" << endl;
    for ( int i=5; i > -3; i-- ){
        menge.hinzufuegen(i);
    }
    menge.anzeigen(); //Ausgabe: 5, 4, 3, 2, 1, 0, -1, -2
    cout << endl;
    
    cout << "fuege Elemente von 3 bis 7 hinzu" << endl;
    for ( int i=3; i < 8; i++ ){
        menge.hinzufuegen(i);
    }
    menge.anzeigen();
    cout << "menge.istMitglied(3) " << menge.istMitglied(3) << endl;
    cout << "menge.istMitglied(-11) " << menge.istMitglied(-11) << endl;
    cout << endl;
    
    cout << "fuege Element -11 hinzu" << endl;
    menge.hinzufuegen(-11);
    menge.anzeigen();
    cout << "menge.istMitglied(-11) " << menge.istMitglied(-11) << endl;
    cout << endl;
    
    cout << "fuege Element 2 hinzu, entferne Elemente 99 und -9" << endl;
    menge.hinzufuegen(2);  // keine Wirkung, 2 gibt es schon
    menge.entfernen(99);   // keine Wirkung, nicht vorhanden
    menge.entfernen(-9);   // keine Wirkung, nicht vorhanden
    menge.anzeigen();
    cout << endl;
    
    cout << "fuege Quadratzahlen hinzu" << endl;
    for (int i = 11; i < 16; i++)
    {
        menge.hinzufuegen(i*i);
    }
    menge.anzeigen();
    cout << endl;
    cout << "Anzahl = " << menge.size() << " Minimum = " << menge.getMin() << endl;
    cout << "menge.getMin() = " << menge.getMin() << endl;
    cout << "menge.getMax() = " << menge.getMax() << endl;
    cout << endl;
    
    cout << "nacheinander Elemente entfernen..." << endl;
    int k = menge.getMin();
    while ( menge.size() > 0 )
    {
        int vorher = menge.size();
        menge.entfernen(k++);
        if ( vorher != menge.size() )
        {
            menge.anzeigen();
            cout << endl;
        }
    }
    
    menge.loeschen();
    return 0;
}