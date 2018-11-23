/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 2, 2018 4:58:17 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>

#include "Week7.h"

using namespace std;

Mahasiswa mahasiswas[MAX];
int counter = 0;

void sampleStruct() {
    int pil = 0;
    for (;;) {
        cout << endl;
        cout << "Contoh struct" << endl;
        cout << "=============" << endl;
        cout << "1. Input data" << endl;
        cout << "2. Tampil data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih [1...3]: ";
        cin >> pil;
        if (pil == 3) {
            break;
        }
        switch (pil) {
            case 1:
                inputData();
                break;
            case 2:
                tampilData();
                break;

        }
    }
}

void inputData() {
    Mahasiswa m;
    cout << "Masukan nim    : ";
    cin >> m.nim;
    cout << "Masukan nama   : ";
    cin >> m.nama;
    cout << "Masukan ipk    : ";
    cin >> m.ipk;
    mahasiswas[counter] = m;
    counter++;
}

void tampilData() {
    for (int i = 0; i < counter; i++) {
        cout << "data ke-" << (i + 1) << endl;
        cout << "-----------------------------" << endl;
        cout << "Nim    :" << mahasiswas[i].nim << endl;
        cout << "Nama   :" << mahasiswas[i].nama << endl;
        cout << "Ipk    :" << mahasiswas[i].ipk << endl;
    }
}