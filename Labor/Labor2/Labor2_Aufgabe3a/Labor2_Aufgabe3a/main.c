//
//  main.c
//  Labor2_Aufgabe3a
//
//  Created by Erik Falk on 18.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    double *pZahl = NULL, maximum = 0, summe = 0;
    int elemente, position = 0, i;
    
    printf("Wiviele Elemente wollen sie erzeugen?\n");
    scanf("%d",&elemente);
    
    //Speicherresevierung
    pZahl = (double *)malloc(elemente*sizeof(double));
    
    //Eingabe
    for (i=0; i<elemente; i++){
        printf("%d. Zahl eingeben:  ", i+1);
        scanf("%lf", pZahl+i);
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
        else if (maximum <= *pZahl+i){
            maximum = *(pZahl+i);
            position = i+1;
        }
        
    }
    
    //Ausgabe
    printf("Summe: %.2lf, Maximum %.2lf, Position %d\n", summe, maximum, position);
    
    //Speicherfreigabe
    free(pZahl);
    
    return 0;
}
