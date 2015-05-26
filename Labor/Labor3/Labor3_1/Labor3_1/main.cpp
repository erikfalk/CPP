//
//  main.cpp
//  Labor3_1
//
//  Created by Erik Falk on 22.05.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>

using namespace std;

class Auto{
    private:
        int leistung;
        string fabrikat;
        static int anzahl;
    
    public:
    //Konstruktoren
    Auto(){
        anzahl++;
    }
    
    Auto(int leistung, string fabrikat){
        this->leistung = leistung;
        this->fabrikat = fabrikat;
        anzahl++;
    }
    
    //Destruktor
    ~Auto(){anzahl--;}
    
    //Klassenmethoden
    static int getAnzahl(){
        return anzahl;
    }
    
    //Objektmethoden
    //setter
    void setLeistung(int leistung){
        this->leistung = leistung;
    }
    
    void setFabrikat(string fabrikat){
        this->fabrikat = fabrikat;
    }
    //getter
    int getLeistung(){
        return leistung;
    }
    
    string getFabrikat(){
        return fabrikat;
    }
    //andere Methoden
    void print(){
        cout << "Leistung:  " << this->getLeistung() << endl;
        cout << "Fabrtikat: " << this->getFabrikat() << endl;
    }
    
};

int Auto::anzahl = 0;

int main(int argc, const char * argv[]) {
    
    int anzahl, leistung;
    string fabrikat;
    Auto *pAuto = NULL;
    
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
    Auto aAuto[3] = {{100, "Opel"}, {300, "Ferrar"}, {30, "Ente"}};
    
    //Ausgabe der zweiten Autos
    for(int i = 0; i<3; i++){
        aAuto[i].print();
    }
    
    //Umbennenung aller Fahrzeuge zu Volkswagen
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
    
    return 0;
}
