/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 21, 2018 5:36:25 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   DoubleLinkedList.cpp
 * Author: od3ng
 * 
 * Created on December 21, 2018, 5:36 AM
 */

#include "DoubleLinkedList.h"
#include <iostream>

using namespace std;

DoubleLinkedList::DoubleLinkedList() {
    head = NULL;
    tail = NULL;
}

DoubleLinkedList::DoubleLinkedList(const DoubleLinkedList& orig) {
}

DoubleLinkedList::~DoubleLinkedList() {
}

void DoubleLinkedList::printFromHead() {
    node* temp = head;
    cout << "[ ";
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "]" << endl;
}

void DoubleLinkedList::printFromTail() {
    node* temp = tail;
    cout << "[ ";
    while (temp) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << "]" << endl;
}

void DoubleLinkedList::addFromHead(int v_) {
    if (head == NULL && tail == NULL) {
        head = new node(v_);
        tail = head;
    } else {
        node* cur = head;
        while (cur && v_ > cur->val) {
            cur = cur->next;
        }
        if (cur == head) {
            cur->prev = new node(v_);
            cur->prev->next = head;
            head = cur->prev;
        } else if (cur) {
            cur->prev->next = new node(v_);
            cur->prev->next->next = cur;
            cur->prev->next->prev = cur->prev;
            cur->prev = cur->prev->next;
        } else if (!cur) {
            tail->next = new node(v_);
            tail->next->prev = tail;
            tail = tail->next;
        }
    }
}

void DoubleLinkedList::addFromTail(int v_) {
    if (head == NULL && tail == NULL) {
        tail = new node(v_);
        head = head;
    } else {
        node* cur = tail;
        while (cur && v_ <= cur->val) {
            cur = cur->prev;
        }
        if (cur == tail) {
            cur->next = new node(v_);
            cur->next->prev = tail;
            tail = cur->next;
        } else if (cur) {
            cur->next->prev = new node(v_);
            cur->next->prev->prev = cur;
            cur->next->prev->next = cur->next;
            cur->next = cur->next->prev;
        } else if (!cur) {
            head->prev = new node(v_);
            head->prev->next = head;
            head = head->prev;
        }
    }
}





