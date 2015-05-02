//
//  main.cpp
//  Labor1_Aufgabe_1
//
//  Created by Erik Falk on 09.04.15.
//
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

#define MAX_TURNS 5

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Zufallszahlen initialsieren
    srand(static_cast<unsigned>(time(NULL)));

    for(int i = 0; i < MAX_TURNS; i++){
        
        cout << i+1 << ". Durchlauf" << endl;
    
        //Variablen
        int count = 0;
        double min = 0.0, max = 0.0, summe = 0, randValue;
    
        do{
        
            //Zufallszahl erzeugen und Durchläufe zählen
            count++;
            randValue = static_cast<double> (rand())/RAND_MAX;
        
            //für Mittelwert aufsummieren
            summe += randValue;
        
            //Minimum und Maximum bestimmen
            if (min == 0.0){
                min = randValue;
                max = randValue;
            }
            else if (randValue <= min)
                min = randValue;
            else if (randValue >= max)
                max = randValue;
        
            //Ausgabe der Zufallswerte
            cout << "Wert " << count << ": " << setprecision(3) << randValue << endl;
        
            //Abbruch der der Zahlengenerierung
            if ( randValue >= 0.85)
                break;
            }
        while (randValue <= 1.0);
        
        //Ausgabe Mittelwert, Minimum, Maximum
        cout << endl << "Anzahl der Werte: " << count << endl;
        cout << "Summe: " << setprecision(3) << summe << endl;
        cout << "Mittelwert: " << setprecision(3) << summe/count << endl;
        cout << "Minimum: " << setprecision(3) << min << endl;
        cout << "Maximum: " << setprecision(3) << max << endl << endl;
    }
    
    return 0;
}
