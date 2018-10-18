/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng Create at Oct 19, 2018 5:49:49 AM
 * Email: lepengdados@gmail.com
 * Github: https://github.com/0d3ng
 * Hp: 085878554150

 */

#include <iostream>
#include <typeinfo>
#include "Week5.h"

using namespace std;

void contoh1() {
    int var = 2;
    cout << &var << " memiliki nilai " << var << endl;
}

void contoh2() {
    int var = 2;
    cout << var << endl;
    cout << &var << endl;
    cout << *&var << endl;
}

void contoh3() {
    int var1 = 2, var2 = 5;
    int *pVar = &var1;

    cout << "var1 = " << &var1 << endl;
    cout << "pVar = " << pVar << endl;
    cout << "=====" << endl << endl;
    pVar = &var2;
    cout << "var2 = " << &var2 << endl;
    cout << "pVar = " << pVar << endl;
}

void contoh4() {
    int var = 2;
    int *pVar = &var;

    cout << "var = " << var << endl;
    cout << "pVar = " << *pVar << endl;
    cout << "=====" << endl << endl;
    *pVar = 109;
    cout << "var = " << var << endl;
    cout << "pVar = " << *pVar << endl;
}

void contoh5() {
    int var = 2;
    int *pVar = &var;

    cout << sizeof (pVar) << endl;
}

void contoh6() {
    int var = 2;
    int *pVar = &var;
    cout << pVar << endl;
    pVar++;
    cout << pVar << endl;
}

void contoh7() {
    int *p = NULL;
    cout << p;
}

void contoh8() {
    cout << typeid (NULL).name() << endl;
    cout << typeid (nullptr).name();
}

void contoh9() {
    int a = 1;
    int &b = a;
    cout << a << "\n";
    b = 2;
    cout << a;
}

void contoh10() {
    int myVar = 1;
    int &myRef = myVar;
    int *myPtr;
    cout << myVar << "\n";
    myRef = 2;
    cout << myVar << "\n";
    myPtr = &myVar;
    *myPtr = 3;
    cout << myVar << "\n";
}

void contoh11() {
    int const &b = 2;

    cout << b << "\n";
}