//
//  MathArray.cpp
//  Tafeluebung4
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include "MathArray.hpp"
#include <iostream>

using namespace std;

template <class T>
MathArray<T>::MathArray(int size){
    this->size = size;
    array = new T[size];
}

template<class T>
MathArray<T>::~MathArray<T>(){
    delete [] array;
}

template <class T>
void MathArray<T>::einlesen(){
    for(int i = 0; i<size; i++){
        cout << (i+1) << ". Element: ";
        cin >> array[i];
    }
}

template<class T>
void MathArray<T>::verdoppeln(){
    for (int i = 0; i < size; i++){
        array[i] *= 2;
    }
}

template<class T>
T MathArray<T>::mittelwert(){
    T mw = 0;
    for (int i = 0; i < size; i++){
        mw += array[i];
    }
    
    return mw/size;
}

template <class T>
void MathArray<T>::ausgeben(){
    cout << "Ausgabe:" << endl;
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

}