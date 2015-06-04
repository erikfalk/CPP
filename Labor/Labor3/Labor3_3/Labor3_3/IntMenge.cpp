//
//  IntMenge.cpp
//  Labor3_3
//
//  Created by Erik Falk on 30.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

//IntMenge.cpp
#include <iostream>
#include <vector>
#include "IntMenge.h"

using namespace std;

IntMenge::IntMenge(){};

int IntMenge::finden(int el) const{
    for(int i = 0; i<vec.size(); i++){
        if(vec[i] == el)
            return i;
    }
    return -1;
}

bool IntMenge::istMitglied(int el){
    if(finden(el) == -1){
        return false;
    }
    return true;
}

void IntMenge::hinzufuegen(int el){
    //Eintrag nur wenn el nicht vorhanden
    if(finden(el) == -1)
        vec.push_back(el);
}

int IntMenge::size() const{
    return static_cast<int>(vec.size());
}

void IntMenge::entfernen(int el){
    //finde Position von el
    int pos = finden(el);
    if(pos != -1){
        //loesche el an Stelle pos
        vec.erase(vec.begin() + pos);
    }
}

int IntMenge::getMax(){
    int max = NULL;
    for (int i=0; i<vec.size(); i++){
        if(max >= vec[i])
            max = vec[i];
    }
    return max;
}

int IntMenge::getMin(){
    int min = NULL;
    for (int i=0; i<vec.size(); i++){
        if(min <= vec[i])
            min = vec[i];
    }
    return min;
}

void IntMenge::anzeigen() const{
    for(int i = 0; i<vec.size(); i++){
        cout << vec[i] << endl;
    }
}

void IntMenge::loeschen(){
    vec.erase(vec.begin(), vec.end());
}