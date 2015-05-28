//
//  Person.h
//  Tafelübung3
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#ifndef __Tafelu_bung3__Person__
#define __Tafelu_bung3__Person__

#include <stdio.h>
#include <string>

class Person{
private:
    char* vorname = NULL;
    char* nachname = NULL;
    
public:
    
    Person(char* = "", char* = ""); //mit Vorgabeargumenten Standardkonstruktor nicht nötig
    
    ~Person();
    
    char* getVorname() const;
    char* getNachname() const;
    
    void setVorname(std::string);
    void setNachname(std::string);
    
    void print() const;
    
};


#endif /* defined(__Tafelu_bung3__Person__) */
