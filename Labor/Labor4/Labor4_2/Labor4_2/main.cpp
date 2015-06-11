//
//  main.cpp
//  Labor4_2b
//
//  Created by Erik Falk on 07.06.15.
//  Copyright (c) 2015 Erik Falk. All rights reserved.
//

#include <iostream>
#include "matrix.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    Matrix A(3,4);
    
    
    for(int i = 0; i < A.getCols(); i++){
        A[0][i] = i+1;
        A[1][i] = i+11;
        A[2][i] = i+21;
    }
    
    Matrix B(A);
    cout << (A+B) << endl;
    B.transpose();
    cout << (A*B) << endl;
    
    return 0;
}
