/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 8, 2018 8:41:09 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   StackLinkedList.h
 * Author: od3ng
 *
 * Created on November 8, 2018, 8:41 AM
 */

#ifndef STACKLINKEDLIST_H
#define STACKLINKEDLIST_H

struct NodeStack {
    int x;
    NodeStack *next;
};

class StackLinkedList {
public:
    StackLinkedList();
    StackLinkedList(const StackLinkedList& orig);
    virtual ~StackLinkedList();
    void push(int n);
    void pop();
    void display();
private:
    NodeStack *TOP;
};

#endif /* STACKLINKEDLIST_H */

