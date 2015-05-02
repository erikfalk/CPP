//
//  main.cpp
//  Blatt_1_Aufgabe_4
//
//  Created by Erik Falk on 10.04.15.
//
//

#include <iostream>

using namespace std;

int addiere(int, int *, int&);

int main(int argc, const char * argv[]) {
    
    srand(static_cast<unsigned>(time(NULL)));
    
    int zahl1 = rand()%100+1, zahl2 = rand()%100+1, zahl3 = rand() %100+1, summe;
    
    //1. Ausgabe
    cout << "1. Ausgabe ( aus main() )" << endl;
    cout << "Zahl 1: " << zahl1 << endl;
    cout << "Zahl 2: " << zahl2 << endl;
    cout << "Zahl 3: " << zahl3 << endl << endl;
    
    summe = addiere(zahl1, &zahl2, zahl3);
    
    cout << "Summe: " << summe << endl;
    
    //3. Ausgabe
    cout << "3. Ausgabe ( wieder aus main() )" << endl;
    cout << "Zahl 1: " << zahl1 << endl;
    cout << "Zahl 2: " << zahl2 << endl;
    cout << "Zahl 3: " << zahl3 << endl << endl;
    
    return 0;
    
    /* Zahl1 wird nur in der Funktion addiere() verdoppelt und mit verdoppeltem Wert aus dieser ausgegeben,
       da Zahl1 mit Call by Value übergeben wurde. Bei Zahl2 und Zahl3 wurde lediglich die Adresse bzw.
       Referenz an die Funktion addiere() übergeben, deswegen haben Änderungen an den Werten auch 
       Auswirkungen auf Zahl2 und Zahl3 in der main Funktion. */
}

int addiere(int x, int *y, int& z){
    
    int summe = x+*y+z;
    
    x *= 2; *y *= 2; z *= 2;
    
    //2. Ausgabe nach Verdopplung
    cout << "2. Ausgabe ( aus addiere() )" << endl;
    cout << "Zahl 1: " << x << endl;
    cout << "Zahl 2: " << *y << endl;
    cout << "Zahl 3: " << z << endl << endl;
    
    return summe;
}