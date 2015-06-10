//
//  Kunde.h
//  Labor4_1a
//
//  Created by Erik Falk on 03.06.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#ifndef __Labor4_1a__Kunde__
#define __Labor4_1a__Kunde__

#include <iostream>
#include <cstring>

using namespace std;

class Kunde{

private:
    //Membervariablen
    char* name;
    char* ort;
    int* alter;
    int anzahlEinkaeufe;
    double umsatz;
    const int kundenId;
    
    //Klassenvariablen
    static int zaehlerKunden;
    static int anzahlKunden;
    static int gesamtAnzahlEinkaeufe;
    
    
public:
    //Konstruktoren und Destruktoren
    Kunde(string = "", string = "" , int = 0);
    //Kopierkonstruktor
    Kunde(const Kunde&);
    ~Kunde();
    
    //Klassenmethoden
    static int getGesamtAnzahlEinkaeufe(){
        return gesamtAnzahlEinkaeufe;
    }

    //Membermethoden
    void kaufe(double);
    int getKundenId() const;
    void print() const;
};

#endif /* defined(__Labor4_1a__Kunde__) */
