//
//  Kunde.cpp
//  Labor4_1a
//
//  Created by Erik Falk on 03.06.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include "Kunde.hpp"
#include <iostream>
#include <cstring>

using namespace std;

int Kunde::anzahlKunden = 1;
int Kunde::zaehlerKunden = 1;
int Kunde::gesamtAnzahlEinkaeufe = 0;

//Konstruktor
Kunde::Kunde(string name, string ort, int alter) : kundenId(zaehlerKunden++){
   
    anzahlKunden++;
   
    //Speicher für name
    this->name = new char[name.length()];
    strcpy(this->name, name.c_str());
    //Speicher für ort
    this->ort = new char[name.length()];
    strcpy(this->ort, ort.c_str());
    //Speicher für alter
    this->alter = new int;
    *this->alter = alter;
    anzahlEinkaeufe = 0;
    umsatz =  0;
}

//Kopierkonstruktor
Kunde::Kunde(const Kunde &k) : kundenId(k.kundenId){
    //Speicher für name
    this->name = new char[strlen(k.name)];
    strcpy(this->name, k.name);
    //Speicher für ort
    this->ort = new char[strlen(k.name)];
    strcpy(this->ort, k.ort);
    //Speicher für alter
    this->alter = new int;
    *this->alter = *k.alter;
    
    this->anzahlEinkaeufe = k.anzahlEinkaeufe;
    this->umsatz = k.umsatz;    
}

//Destruktor
Kunde::~Kunde(){
    anzahlKunden--;
    delete[] name;
    delete[] ort;
    delete alter;
}

//Methoden
int Kunde::getKundenId() const{
    return kundenId;
}

void Kunde::kaufe(double kauf){
    //alle Einkäufe
    gesamtAnzahlEinkaeufe++;
    //Einkäufe des Kunden
    anzahlEinkaeufe++;
    umsatz += kauf;
}

void Kunde::print() const{
    cout << "Kunde " << name << " aus " << ort << " (ID = " << kundenId << ", " << *alter << " Jahre) hatte " << anzahlEinkaeufe << " Einkaeufe und " << umsatz << " EURO Umsatz" << endl;
}
