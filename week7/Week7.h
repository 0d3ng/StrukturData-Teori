/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 2, 2018 4:55:43 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Week7.h
 * Author: od3ng
 *
 * Created on November 2, 2018, 4:55 AM
 */

#include <iostream>

using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

const int MAX = 100;

#ifndef WEEK7_H
#define WEEK7_H

void inputData();
void tampilData();
void sampleStruct();

#endif /* WEEK7_H */

