/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 8, 2018 7:10:03 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Stack.h
 * Author: od3ng
 *
 * Created on November 8, 2018, 7:10 AM
 */

#ifndef STACK_H
#define STACK_H

#define MAX 1000

class Stack {
public:
    Stack();
    Stack(const Stack& orig);
    virtual ~Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void viewStack();
private:
    int TOP;
    int stack[MAX];
};

#endif /* STACK_H */

