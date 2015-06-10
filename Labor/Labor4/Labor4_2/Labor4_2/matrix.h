// ------------------------------------------------------
// matrix.h: Darstellung von dynamischen Matrizen
// ------------------------------------------------------
#ifndef _MATRIX_H_
#define _MATRIX_H_


#include <iostream>
#include <cassert>

using namespace std;

class Zeile {
private:
    int *z;
    int size;
    
public:
    // zu implementieren: Konstruktor und Destruktor
    Zeile(int size);
    ~Zeile();
    
    // Indexoperator [] ist (in zwei Versionen) bereits implementiert für die Klasse Zeile
    int& operator[](int i){
        assert(i >= 0 && i < size);
        return z[i];
    }
    
    const int& operator[](int i) const{
        assert(i >= 0 && i < size);
        return z[i];
    }
};

class Matrix{
private:
    Zeile **mat;        // Zeiger auf "Zeilen"-Vektor
    int nrows, ncols;   // Zeilen- und Spaltenzahl
    
public:
    
    // zu implementieren: Zwei Konstruktoren, ein Kopierkonstruktor und ein Destruktor
    Matrix( int _nrows , int _ncols);
    Matrix( int z, int s, int wert);
    Matrix( const Matrix& );
    ~Matrix();
    
    // zu implementieren: Zuweisungsoperator für tiefe Kopie (falls in Vorlesung besprochen)
    Matrix& operator=( const Matrix& ma );
    
    int  getRows() const {
        return nrows;
    }
    
    int  getCols() const {
        return ncols;
    }
    
    //zu implementieren: Indexoperator [] (in zwei Versionen) für die Klasse Matrix
    inline Zeile& operator[](int i){
        assert(i >= 0 && i < nrows);
        return *mat[i];
    }
    
    inline const Zeile& operator[](int i) const{
        assert(i >= 0 && i < nrows);
        return *mat[i];
    }
    
    // zu implementieren: Transponierte der Matrix
    Matrix transpose();
    
    // zu implementieren: Ausgabefunktion, i.e. print() oder operator<<
    friend ostream& operator<<(ostream& os, const Matrix& m);
    
    friend Matrix operator+(const Matrix& ma, const Matrix& mb);
    friend Matrix operator*(const Matrix& ma, const Matrix& mb);
};

// zu implementieren: zwei globale Operatorfunktionen für Addition und Multiplikation
Matrix operator+(const Matrix& ma, const Matrix& mb);
Matrix operator*(const Matrix& ma, const Matrix& mb);
#endif
