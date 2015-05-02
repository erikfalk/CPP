//
//  main.cpp
//  Labor_2_Aufgabe1b
//
//  Created by Erik Falk on 21.04.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

double gehalt(double stunden, double stundenlohn = 7.5, double steuersatz = 33.0);

int main(int argc, const char * argv[]) {
    
    double stunden = 0, stundenlohn = 0, steuersatz = 0;
    char wahl;
    bool x = true;
    
    //Eingabe der gearbeiteten Stunden
    cout << "Wiviele Stunden haben Sie gearbeitet?" << endl;
    cin >> stunden;
    cin.clear();
    
    //Verarbeitung der Lohndaten
    while(x == true){
        //Abfrage für Nutzung der Standardwerte
        cout << "Standardwerte nutzen (7.50€/h Lohn und 33% Steuern) (j/n)?" << endl;
        cin >> wahl;
        
        //mit Vorgabeargumente
        if(toupper(wahl) == 'J'){
            cout << "Ihr Gehalt beträgt: " << gehalt(stunden) << "€" << endl;
            x = false;
        }
        //ohne Vorgabeargumente
        else if(toupper(wahl) == 'N'){
            cout << "Wie hoch ist Ihr Stundenlohn?" << endl;
            cin  >> stundenlohn;
            cout << "Welchen Steuersatz haben Sie?" << endl;
            cin  >>  steuersatz;
            cout << "Ihr Gehalt beträgt: " << gehalt(stunden, stundenlohn, steuersatz) << "€" << endl;
            x = false;
        }
        else{
            cout << "Falsche Eingabe, bitte nur j oder n eingeben!" << endl;
        }
    }
    
    return 0;
}

double gehalt(double stunden, double stundenlohn, double steuersatz){
    //Berechnung des Nettolohn
    return (stunden*stundenlohn)-((stunden*stundenlohn)*steuersatz)/100;
}
