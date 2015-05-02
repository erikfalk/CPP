//
//  main.cpp
//  Labor2_Aufgabe2b
//
//  Created by Erik Falk on 27.04.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#define MAX_ITEMS 100

using namespace std;


//template declaration
template<typename T>
T getPos(T array[], T item, int size);

template<typename T>
T average(T array[], int size);


int main(int argc, const char * argv[]) {
    
    int intArray[MAX_ITEMS];
    long longArray[MAX_ITEMS];
    double doubleArray[MAX_ITEMS];
    
    //füllen der Arrays
    for(int i = 0;i<MAX_ITEMS;i++){
        intArray[i] = i+1;
        longArray[i] = i+1000000000000000;
        doubleArray[i] = i+0.4;
    }
    
    //Ausgabe
    cout << "int Array" << endl;
    getPos(intArray,1 , MAX_ITEMS) == -1 ? cout << "Item nicht vorhanden!" << endl :
                                           cout << "Item ist an stelle: " << getPos(intArray,1 , MAX_ITEMS) << endl;
    cout << "Mittelwert ist:     " << average(intArray, MAX_ITEMS) << endl << endl;
    
    cout << "long Array" << endl;
    cout << getPos(longArray, 1234567892334455653, MAX_ITEMS) << endl;
    cout << average(longArray, MAX_ITEMS) << endl << endl;
    
    cout << "double Array" << endl;
    cout << getPos(doubleArray, 1.3, MAX_ITEMS) << endl;
    cout << average(doubleArray, MAX_ITEMS) << endl << endl;
    
    return 0;
}

//getPos bestimmt die Position des gesuchten Items
template<typename T>
T getPos(T array[], T item, int size){
    
    for(int i = 0; i<size; i++){
        if (array[i] == item)
            return i+1;
    }
    return -1;
}

//average berechnet den Mittelwert alle aus dem Array übergebenen Werte
template<typename T>
T average(T array[], int size){
    
    T summe = 0;
    
    for (int i = 0; i<size; i++){
        summe += array[i];
    }
    
    return summe/size;
}

