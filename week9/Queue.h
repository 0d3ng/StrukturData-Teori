/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 30, 2018 1:54:28 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Queue.h
 * Author: od3ng
 *
 * Created on November 30, 2018, 1:54 PM
 */

#ifndef QUEUE_H
#define QUEUE_H
#define MAX 5

class Queue {
public:
    Queue();
    Queue(const Queue& orig);
    virtual ~Queue();
    bool isFull();
    bool isEmpty();
    void enQueue(int element);
    int deQueue();
    void display();
private:
    int items[MAX], rear, front;
};

#endif /* QUEUE_H */

