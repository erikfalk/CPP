//
//  Person.cpp
//  Tafelübung3
//
//  Created by Erik Falk on 28.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include "Person.h"
#include <string>
#include <iostream>


Person::Person(char* vorname, char* nachname){
    
    this->vorname = new char[strlen(vorname)+1];
    strcpy(this->vorname, vorname);
    
    this->vorname = new char[strlen(vorname)+1];
    strcpy(this->vorname, vorname);
}

Person::~Person(){
    delete [] vorname;
    delete [] nachname;
}


char* Person::getVorname() const{
        return vorname;
}
    
char* Person::getNachname() const{
    return nachname;
}
    
void Person::setVorname(std::string vorname){
    if(this->vorname == NULL)
        this->vorname = new char[vorname.length()];
    strcpy(this->vorname, vorname.c_str());
}

void Person::setNachname(std::string nachname){
    if(this->nachname == NULL)
        this->nachname = new char[nachname.length()];
    strcpy(this->nachname, nachname.c_str());
}

void Person::print() const{
    std::cout << "Vorname: " << vorname << std::endl;
    std::cout << "Nachname: " << nachname << std::endl;
}
    

