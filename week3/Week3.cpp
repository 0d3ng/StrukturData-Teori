/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 05/10/2018
 */

#include "Week3.h"
#include <iostream>
#include <iomanip>

using namespace std;

void array() {
    int n[ 10 ]; // n is an array of 10 integers

    // initialize elements of array n to 0          
    for (int i = 0; i < 10; i++) {
        n[ i ] = i + 100; // set element pada lokasi i ke i + 100
    }
    cout << "Element" << setw(13) << "Nilai" << endl;

    // tampilkan masing-masing element                    
    for (int j = 0; j < 10; j++) {
        cout << setw(7) << j << setw(13) << n[ j ] << endl;
    }
}