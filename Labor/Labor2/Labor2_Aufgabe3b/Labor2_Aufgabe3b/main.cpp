//
//  main.c
//  Labor2_Aufgabe3b
//
//  Created by Erik Falk on 18.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//


#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double *pZahl = NULL, maximum = 0, summe = 0;
    int elemente, position = 0, i;
    
    cout << "Wiviele Elemente wollen sie erzeugen?\n" << endl;
    cin >> elemente;
    
    //Speicherresevierung
    pZahl = new double[elemente];
    
    //Eingabe
    for (i=0; i<elemente; i++){
        cout << (i+1) << ". Zahl eingeben:  ";
        cin >> *(pZahl+i);
    }
    
    //Verarbeitung
    for(i=0; i<elemente; i++){
        //Summe
        summe +=*(pZahl+i);
        
        //Maximum und Position des Maximums
        if (maximum == 0){
            maximum = *(pZahl+i);
            position = i+1;
        }
        else if (maximum <= *(pZahl+i)){
            maximum = *(pZahl+i);
            position = i+1;
        }
        
    }
    
    //Ausgabe
    cout <<"Summe: " << summe << " Maximum: " << maximum << " Position: " << position << endl;
    
    //Speicherfreigabe
    delete[] pZahl;
    
    return 0;
}
