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
    T  Array[3];

public:
    MathArray(T a = 0, T b = 0, T c = 0);
    void einlesen();
};

#include "MathArrayImpl.hpp" //!!!! Wichtig sonst erzeugen Klassentemplates Fehler

#endif /* defined(__Tafeluebung4__MathArray__) */
