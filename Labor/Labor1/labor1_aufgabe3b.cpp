//
//  main.cpp
//  Labor_1_Aufgabe_3b
//
//  Created by Erik Falk on 10.04.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    struct student {
        int id;
        string name;
        string studiengang;
        float note;
        bool bestanden;
    } ;
    
    student studi[3];
    
    studi[0] = { .id = 123, .name = "Philip J. Fry", .studiengang = "I&E", .note = 5.0, .bestanden = false};
    studi[1] = { .id = 456, .name = "Hubert J. Farnsworth", .studiengang = "I&E", .note = 1.0, .bestanden = true};
    studi[2] = { .id = 789, .name = "John Zoidberg", .studiengang = "SuG", .note = 4.0, .bestanden = true};
    
    float& refNote = studi[0].note;
    student& refStudent1 = studi[1];
    bool& refBestanden = refStudent1.bestanden;
    
    //Ausgabe
    cout << "Note von studi[0]: " << refNote << endl << endl;
    
    cout << "Daten von studi[1]: " << endl;
    cout << "ID: " << refStudent1.id << " Name: " << refStudent1.name << " SG: " << refStudent1.studiengang <<
    " Note: " << refStudent1.note << " bestanden: " << refStudent1.bestanden << endl << endl;
    
    cout << "studi[1] bestanden: " << refBestanden << endl;
    return 0;
}
