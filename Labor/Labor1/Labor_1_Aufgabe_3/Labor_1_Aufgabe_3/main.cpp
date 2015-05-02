//
//  main.cpp
//  Labor_1_Aufgabe_3
//
//  Created by Erik Falk on 10.04.15.
//
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int x = 5; // x ist 5
    
    int& y = x; // Referenz auf x, Ausgabe von y ergibt 5
    
    y = 9; // x ist 9, Ausgabe von y ergibt 9
    
    int a[100]; // Array mit 100 Elementen
    
    int &b = a[55]; // an die Adresse von b wird Element a[55] zugewiesen
    
    b = y; // Element a[55] ist 9, Ausgabe von b ergibt 9
    
    int *p = &y; // pointer p zeigt auf die Adresse von Referenz y
    
    int& z = *p; // z ist Referenz auf den Wert an der Adresse von *p
    
    z = 33; // x wird über Referenz z und weiter über *p auf 33 gesetzt
    
    //x, y, z = 33; b = 9
    
    return 0;
}
