/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 1, 2018 10:05:18 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include "Week4.h"
#include <iostream>

using namespace std;

void array1() {
    //    int test[2][3] = {2, 4, 5, 9, 0, 0};//walaupun bisa tapi tidak disarankan
    int test[2][3] = {
        {2, 4, 5},
        {9, 0, 0}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << i << "," << j << "]=" << test[i][j] << " ";
        }
        cout << endl;

    }

}

void array2() {
    int temp[KOTA][MINGGU];
    cout << "Masukan temperatur untuk sebuah kota" << endl;
    for (int i = 0; i < KOTA; i++) {
        for (int j = 0; j < MINGGU; j++) {
            cout << "Kota ke-" << (i + 1) << " hari ke-" << (j + 1) << ": ";
            cin >> temp[i][j];
        }
    }
    for (int i = 0; i < KOTA; i++) {
        for (int j = 0; j < MINGGU; j++) {
            cout << "Kota ke-" << (i + 1) << ": " << temp[i][j] << " ";
        }
        cout << endl;
    }

}

void array3() {
    int test[2][4][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9},
            {10, 11, 12}
        },
        {
            {13, 14, 15},
            {16, 17, 18},
            {19, 20, 21},
            {22, 23, 24}
        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "[" << i << "," << j << "," << k << "]=" << test[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void array4() {
    int matriksA[2][3] = {
        {2, 4, 5},
        {9, 0, 0}
    };
    int matriksB[2][3] = {
        {1, 2, 3},
        {9, 6, 4}
    };
    int hasil[2][3];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "[" << i << "," << j << "]=" << hasil[i][j] << " ";
        }
        cout << endl;

    }
}

void tugasMatriks() {
    int panjang;
    cout << "Masukan panjang matriks: ";
    cin >> panjang;
    int matriks[panjang][panjang];
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < panjang; j++) {
            cout << "[" << i << "," << j << "]= ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;
    int y = panjang - 1, x = 0;
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < panjang; j++) {
            if (j == y) {
                matriks[x][y] = 0;
            }
        }
        y--;
        x++;
    }
    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < panjang; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}