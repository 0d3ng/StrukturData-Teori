/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Oct 25, 2018 12:46:26 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>

#include "Week6.h"

using namespace std;

void contohStruct() {
    Person p;
    cout << "Masukan nama: ";
    cin >> p.nama;
    cout << "Masukan umur: ";
    cin >> p.umur;
    cout << "Masukan salary: ";
    cin >> p.salary;
    tampilStruct(p);
}

void contohStructPointer() {
    Person *ptr, p;
    ptr = &p;
    cout << "Masukan nama: ";
    cin >> ptr->nama;
    cout << "Masukan umur: ";
    cin >> ptr->umur;
    cout << "Masukan salary: ";
    cin >> ptr->salary;
    cout << "Data yang anda masukan:" << endl;
    cout << "=======================" << endl;
    cout << "Nama   : " << ptr->nama << endl;
    cout << "Umur   : " << ptr->umur << endl;
    cout << "Salary : " << ptr->salary << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << &p << endl;

}

void tampilStruct(Person p) {
    cout << endl;
    cout << "Data yang anda masukan:" << endl;
    cout << "=======================" << endl;
    cout << "Nama   : " << p.nama << endl;
    cout << "Umur   : " << p.umur << endl;
    cout << "Salary : " << p.salary << endl;
}

Person getPerson(Person p) {
    cout << "Masukan nama: ";
    cin >> p.nama;
    cout << "Masukan umur: ";
    cin >> p.umur;
    cout << "Masukan salary: ";
    cin >> p.salary;
    return p;
}

void contohEnum() {
    week today;
    today = Wednesday;
    cout << "Hari: " << today + 1;
}