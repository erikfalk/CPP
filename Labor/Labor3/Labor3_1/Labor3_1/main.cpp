//
//  main.cpp
//  Labor3_1
//
//  Created by Erik Falk on 22.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

class Auto{
    private:
        int leistung;
        char* fabrikat = NULL;
        static int anzahl;
    
    public:
    //Konstruktoren
    Auto(){
        anzahl++;
    }
    
    Auto(int leistung, char* fabrikat){
        this->leistung = leistung;
        this->fabrikat = new char[strlen(fabrikat)];
        strcpy(this->fabrikat, fabrikat);
        anzahl++;
    }
    
    //Destruktor
    ~Auto(){
        anzahl--;
        delete[] fabrikat;
    }
    
    //Klassenmethoden
    static int getAnzahl(){
        return anzahl;
    }
    
    //Objektmethoden
    //setter
    void setLeistung(int leistung){
        this->leistung = leistung;
    }
    
    void setFabrikat(char* fabrikat){
        if(this->fabrikat == NULL)
            this->fabrikat = new char[strlen(fabrikat)];
        strcpy(this->fabrikat, fabrikat);
    }
    //getter
    int getLeistung(){
        return leistung;
    }
    
    char* getFabrikat(){
        return fabrikat;
    }
    //andere Methoden
    void print(){
        cout << "Leistung:  " << this->getLeistung() << endl;
        cout << "Fabrtikat: " << this->getFabrikat() << endl << endl;
    }
    
};

int Auto::anzahl = 0;

int main(int argc, const char * argv[]) {
    
    int anzahl, leistung;
    Auto *pAuto = NULL;
    char* fabrikat;
    fabrikat = new char[255];
    
    //Anzahl Autos (erzeugt mit Standardkonstruktor)
    cout << "Wieviele Autos sollen erzeugt werden? ";
    cin >> anzahl;
    pAuto = new Auto[anzahl];
    
    //Dateneingabe für Autos
    for(int i = 0; i<anzahl; i++){
        cout << (i+1) << ". Auto Leistung: ";
        cin >> leistung;
        pAuto[i].setLeistung(leistung);
        cout << (i+1) << ". Auto Fabrikat: ";
        cin >> fabrikat;
        pAuto[i].setFabrikat(fabrikat);
    }
    
    //Ausgabe der zuerst erstellten Autos
    for(int i = 0; i < anzahl; i++){
        cout << (i+1) << ".Auto" << endl;
        pAuto[i].print();
        cout << endl;
    }
    
    //Autos mit Initialisierungsliste,
    //erzeugt mit Konstruktor "Auto(int leistung, string fabrikat)"
    Auto aAuto[] = {{100, "Opel"}, {300, "Ferrari"}, {30, "Ente"}};
    
    //Ausgabe der zweiten Autos
    for(int i = 0; i<3; i++){
        aAuto[i].print();
    }
    
    //Umbenennung aller Fahrzeuge zu Volkswagen mit Ausgabe
    for(int i = 0; i<anzahl; i++){
        pAuto[i].setFabrikat("Volkswagen");
        pAuto[i].print();
        
        if(i<3){
            aAuto[i].setFabrikat("Volkswagen");
            aAuto[i].print();
        }
    }
    
    cout << "Anzahl Auto Objekte: " << Auto::getAnzahl() << endl;
    
    //Speicher freigeben
    delete[] pAuto;
    delete[] fabrikat;
    
    return 0;
}
