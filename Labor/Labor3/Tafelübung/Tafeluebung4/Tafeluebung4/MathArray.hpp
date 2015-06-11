//
//  MathArray.h
//  Tafeluebung4
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#ifndef __Tafeluebung4__MathArray__
#define __Tafeluebung4__MathArray__

#include <stdio.h>

template<class T>
class MathArray{
private:
    T* array;
    int size;

public:
    MathArray(int = 0);
    ~MathArray();
    void einlesen();
    void verdoppeln();
    T mittelwert();
    void ausgeben();
};

#include "MathArrayImpl.hpp" //!!!! Wichtig sonst erzeugen Klassentemplates Fehler

#endif /* defined(__Tafeluebung4__MathArray__) */
