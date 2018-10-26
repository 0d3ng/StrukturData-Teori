/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created at Oct 25, 2018 10:01:07 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Week6.h
 * Author: od3ng
 *
 * Created on October 25, 2018, 10:01 AM
 */

#include <iostream>
using namespace std;

#ifndef WEEK6_H
#define WEEK6_H

struct Person {
    string nama;
    int umur;
    int salary;
};

void contohStruct();
void contohStructPointer();
void tampilStruct(Person);
Person getPerson(Person);

#endif /* WEEK6_H */


