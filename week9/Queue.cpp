/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 30, 2018 1:54:30 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Queue.cpp
 * Author: od3ng
 * 
 * Created on November 30, 2018, 1:54 PM
 */

#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
    rear = front = -1;
}

Queue::Queue(const Queue& orig) {
}

Queue::~Queue() {
}

bool Queue::isFull() {
    if (front == 0 && rear == MAX - 1) {
        return true;
    }
    return false;
}

bool Queue::isEmpty() {
    if (front == -1) return true;
    else return false;
}

void Queue::enQueue(int element) {
    if (isFull()) {
        cout << "Queue is full";
    } else {
        if (front == -1) front = 0;
        rear++;
        items[rear] = element;
        cout << "Inserted " << element << endl;
    }
}

int Queue::deQueue() {
    int element;
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return (-1);
    } else {
        element = items[front];
        if (front >= rear) {
            front = -1;
            rear = -1;
        }/* Q has only one element, so we reset the queue after deleting it. */
        else {
            front++;
        }
        cout << endl << "Deleted -> " << element << endl;
        return (element);
    }
}

void Queue::display() {
    /* Function to display elements of Queue */
    int i;
    if (isEmpty()) {
        cout << endl << "Empty Queue" << endl;
    } else {
        cout << endl << "Front -> " << front;
        cout << endl << "Items -> ";
        for (i = front; i <= rear; i++)
            cout << items[i] << "\t";
        cout << endl << "Rear -> " << rear << endl;
    }
}



