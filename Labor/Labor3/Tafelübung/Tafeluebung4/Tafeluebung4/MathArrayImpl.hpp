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
MathArray<T>::MathArray(T a, T b, T c){
    Array[0] = a;
    Array[1] = b;
    Array[2] = c;
}

template <class T>
void MathArray<T>::einlesen(){
    
    for(int i = 0; i<3; i++){
        cout << (i+1) << ". Element: ";
        cin >> Array[i];
    }
}