/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 8, 2018 7:10:04 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Stack.cpp
 * Author: od3ng
 * 
 * Created on November 8, 2018, 7:10 AM
 */

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
    TOP = -1;
}

Stack::Stack(const Stack& orig) {
}

Stack::~Stack() {
}

bool Stack::push(int x) {
    if (isFull()) {
        cout << "Stack penuh!" << endl;
        return false;
    } else {
        stack[++TOP] = x;
        return true;
    }
}

int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
        return 0;
    } else {
        return stack[TOP--];
    }
}

bool Stack::isEmpty() {
    return TOP == -1;
}

bool Stack::isFull() {
    return TOP >= MAX - 1;
}

int Stack::peek() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
        return 0;
    } else {
        return stack[TOP];
    }
}

void Stack::viewStack() {
    if (isEmpty()) {
        cout << "Stack kosong" << endl;
    } else {
        for (int i = 0; i <= TOP; i++) {
            cout << "stack ke-" << i << ": " << stack[i] << endl;
        }
    }
}



