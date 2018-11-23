/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 8, 2018 8:41:10 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   StackLinkedList.cpp
 * Author: od3ng
 * 
 * Created on November 8, 2018, 8:41 AM
 */

#include <string.h>

#include "StackLinkedList.h"
#include <iostream>

using namespace std;

StackLinkedList::StackLinkedList() {
}

StackLinkedList::StackLinkedList(const StackLinkedList& orig) {
}

StackLinkedList::~StackLinkedList() {
}

void StackLinkedList::push(int n) {
    struct NodeStack *newNode = new NodeStack;
    newNode->x = n;
    newNode->next = TOP;
    TOP = newNode;
}

void StackLinkedList::pop() {
    if (TOP == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }
    cout << TOP->x << " diambil!" << endl;
    TOP = TOP->next;
}

void StackLinkedList::display() {
    if (TOP == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }
    struct NodeStack *temp = TOP;
    while (temp != NULL) {
        cout << temp->x << " ";
        temp = temp->next;
    }
    cout << endl;
}


