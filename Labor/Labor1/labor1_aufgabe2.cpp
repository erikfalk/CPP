//
//  main.cpp
//  Labor1_Aufgabe_2
//
//  Created by Erik Falk on 09.04.15.
//
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //Aufgabe a)
    //Ganzzahldatentypen
    cout << "Aufgabe 2 a)" << endl << "Ganzzahldatentypen" << endl;
    cout << "char (signed/unsigned):      " << sizeof(char) << " Byte" << endl;
    cout << "short (signed/unsigned):     " << sizeof(short) << " Byte" << endl;
    cout << "int (signed/unsigned):       " << sizeof(int) << " Byte" << endl;
    cout << "long (signed/unsigned):      " << sizeof(long) << " Byte" << endl;
    cout << "long long (signed/unsigned): " << sizeof(long long) << " Byte" << endl << endl;
    
    //speziell
    cout << "bool:                        " << sizeof(bool) << " Byte" << endl << endl;

    //Fließkommadatentypen
    cout << "Fließkommadatentypen" << endl;
    cout << "float:                       " << sizeof(float) << " Byte" << endl;
    cout << "double:                      " << sizeof(double) << " Byte" << endl;
    cout << "long double:                 " << sizeof(long double) << " Byte" << endl << endl;
    
    //Aufgabe b)
    cout << "Aufgabe 2 b) und c)" << endl << "Strukturen" << endl;
    
    struct student {
        int id;
        string name;
        string studiengang;
        float note;
        bool bestanden;
    } ;
    cout << "struct student Größe:        " << sizeof(student) << " Byte" << endl << endl;
    
    //Aufgabe c)
    student students[3];
    students[0] = { .id = 123, .name = "Philip J. Fry", .studiengang = "I&E", .note = 5.0, .bestanden = false};
    students[1] = { .id = 456, .name = "Hubert J. Farnsworth", .studiengang = "I&E", .note = 1.0, .bestanden = true};
    students[2] = { .id = 789, .name = "John Zoidberg", .studiengang = "SuG", .note = 4.0, .bestanden = true};
    
    student student4, student5;
    
    student4.id = 252;
    student4.name = "Bender B. Rodriguez";
    student4.studiengang = "Maschinenwesen";
    student4.note = 4.0;
    student4.bestanden = true;
    
    student5.id = 438;
    student5.name = "Amy Wong";
    student5.studiengang = "Wirtschaft";
    student5.note = 5.0;
    student5.bestanden = false;
    
    //Ausgabe der struct Daten
    for(int i = 0; i < 3; i++){
        cout << "ID:          " << students[i].id << endl;
        cout << "Name:        " << students[i].name << endl;
        cout << "Studiengang: " << students[i].studiengang << endl;
        cout << "Note:        " << students[i].note << endl;
        students[i].bestanden ? cout << "bestanden:   ja"  << endl << endl :
                                cout << "bestanden:   nein" << endl << endl;
    }
    
    //student4
    cout << "ID:          " << student4.id << endl;
    cout << "Name:        " << student4.name << endl;
    cout << "Studiengang: " << student4.studiengang << endl;
    cout << "Note:        " << student4.note << endl;
    student4.bestanden ? cout << "bestanden:   ja"  << endl << endl :
                         cout << "bestanden:   nein" << endl << endl;
    
    //student5
    cout << "ID:          " << student5.id << endl;
    cout << "Name:        " << student5.name << endl;
    cout << "Studiengang: " << student5.studiengang << endl;
    cout << "Note:        " << student5.note << endl;
    student5.bestanden ? cout << "bestanden:   ja"  << endl << endl :
                         cout << "bestanden:   nein" << endl << endl;
    
    return 0;
}
