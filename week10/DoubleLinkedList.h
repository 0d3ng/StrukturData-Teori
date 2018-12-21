/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 21, 2018 5:36:24 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   DoubleLinkedList.h
 * Author: od3ng
 *
 * Created on December 21, 2018, 5:36 AM
 */

#include <iostream>
using namespace std;

#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H

class DoubleLinkedList {
public:
    DoubleLinkedList();
    DoubleLinkedList(const DoubleLinkedList& orig);
    virtual ~DoubleLinkedList();
    void printFromHead();
    void printFromTail();
    void addFromHead(int v_);
    void addFromTail(int v_);
private:

    struct node {
        int val;
        node* next;
        node* prev;

        node(int _val) : val(_val), next(NULL), prev(NULL) {
        };
    };
    node* head;
    node* tail;
};

#endif /* DOUBLELINKEDLIST_H */

