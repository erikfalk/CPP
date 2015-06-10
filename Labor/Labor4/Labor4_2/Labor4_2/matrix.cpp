//
//  matrix.cpp
//  Labor4_2
//
//  Created by Erik Falk on 07.06.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include <cassert>
#include "matrix.h"


//Implementierungen für Klasse: Zeile

//Konstruktoren
Zeile::Zeile(int size){
    this->size = size;
    //Speicher für Zeile reservieren
    z = new int[size];
}

//Destruktor
Zeile::~Zeile(){
  delete [] z;
}

//Implementierungen für Klasse: Matrix

//Konstruktoren
Matrix::Matrix(int _nrows, int _ncols){
    nrows = _nrows;
    ncols = _ncols;
    
    //Zeiger auf Feld von Zeilenzeigern
    mat = new Zeile* [nrows];
    //Erzeugung der Zeilen
    for (int i = 0; i < nrows; i++){
        mat[i] = new Zeile(ncols);
    }
   
}

Matrix::Matrix( int z, int s, int wert){
    nrows = z;
    ncols = s;
    
    //Zeiger auf Feld von Zeilenzeigern
    mat = new Zeile* [nrows];
    //Erzeugung der Zeilen
    for ( int i = 0; i < nrows; i++){
        mat[i] = new Zeile(ncols);
        //Füllen mit wert
        for(int j = 0; j < ncols; j++){
            (*mat[i])[j] = wert;
        }
    }
}

//Kopierkonstruktor
Matrix::Matrix( const Matrix& m ){
    
    nrows = m.nrows;
    ncols = m.ncols;
    
    //Speicher für Matrix reservieren
    mat = new Zeile* [nrows];
    for ( int i = 0; i < nrows; i++){
        mat[i] = new Zeile(ncols);
    }
    //Nutzung des überladenen Zuweisungsoperator
    *this = m;
}

//Destruktor
Matrix::~Matrix(){
    //Zeilen löschen
    for (int i = 0; i < nrows; i++){
        delete mat[i];
    }
    delete [] mat;
}

//Zuweisungsoperator =
Matrix& Matrix::operator=( const Matrix& ma ){
    
    //Schutz vor Selbstzuweisung
    if (this == &ma)
        return *this;
    
    nrows = ma.nrows;
    ncols = ma.ncols;
    
    //Werte der Matrix kopieren
    for ( int i = 0; i < nrows; i++){
        for(int j = 0; j < ncols; j++){
            (*mat[i])[j] = ma[i][j];
        }
    }
    return *this;
}

//transponieren
Matrix Matrix::transpose(){
    Matrix matrix(ncols, nrows);
    //tauschen der Zeilen
    for(int i = 0; i < matrix.nrows; i++ ){
        for(int j= 0; j < matrix.ncols; j++){
            matrix[i][j] = (*mat[j])[i];
        }
    }
    
    return matrix;
}

//Addition +
Matrix operator+(const Matrix& ma, const Matrix& mb){
    assert(ma.nrows == mb.nrows && ma.ncols == mb.ncols);
    
    Matrix matrix(ma.nrows,ma.ncols);
    for(int i = 0; i< ma.nrows; i++){
        for (int j = 0; j < ma.ncols; j++){
            matrix[i][j] = ma[i][j] + mb[i][j];
        }
    }
    
    return matrix;
}

//Multiplikation *
Matrix operator*(const Matrix& ma, const Matrix& mb){
    assert(ma.ncols == mb.nrows);
    
    Matrix matrix(ma.nrows, mb.ncols, 0);
    for(int i = 0; i<matrix.nrows; i++){
        for(int j = 0; j < matrix.ncols; j++){
            for(int k = 0; k < ma.ncols; k++){
                matrix[i][j] += ma[i][k]*mb[k][j];
            }
        }
    }
    return matrix;
}

//Ausgabeoperator <<
ostream& operator<<(ostream& os, const Matrix& m){
    for (int i = 0; i < m.nrows; i++){
        os << endl;
        for (int j = 0; j< m.ncols; j++){
            os << m[i][j] << "   ";
        }
    }
    return os;
}





