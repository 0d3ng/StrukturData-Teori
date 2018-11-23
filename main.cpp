/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 28/09/2018
 */

/* 
 * File:   main.cpp
 * Author: nopri
 *
 * Created on September 28, 2018, 7:51 AM
 */

#include <stack>

#include "week4/Week4.h"
#include "week7/Week7.h"
#include "week8/Stack.h"
#include "week8/StackLinkedList.h"

/*
 * 
 */

int main() {
    //    contoh1();
    //    contoh2();
    //    cekPointer();
    //    contoh3();
    //    contoh4();
    //    contoh5();
    //    contoh6();
    //    contoh7();
    //    contoh8();
    //    contoh9();
    //    contoh10();
    //    contoh11();
    //    pertemuan ke-6
    //    =================
    //    Person p;
    //    tampilStruct(getPerson(p));
    //    contohStructPointer();
    //    contohEnum();
    //    pertemuan ke-4
    //      ===================
    //    array1();
    //    array2();
    //    array3();
    //    array4();
    //    tugasMatriks();
    //    sampleStruct();
    //    pertemuan ke-8
    //    ========================
//    cout << "Sample stack array" << endl;
//    cout << "---------------------" << endl;
//    Stack stack;
//    stack.push(1);
//    stack.push(2);
//    stack.push(3);
//    stack.viewStack();
//    cout << "Peek: " << stack.peek() << endl;
//    while (!stack.isEmpty()) {
//        cout << "Pop: " << stack.pop() << endl;
//    }
//    stack.viewStack();
    
//    cout << "Sample stack linked list" << endl;
//    cout << "---------------------" << endl;
//    StackLinkedList stackLinkedList;
//    stackLinkedList.push(1);
//    stackLinkedList.push(2);
//    stackLinkedList.push(3);
//    stackLinkedList.display();
//    stackLinkedList.pop();
//    stackLinkedList.display();
    
    cout << "Sample stack STL" << endl;
    cout << "---------------------" << endl;
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "size: " << stack.size() << endl;
    cout << "top: " << stack.top() << endl;
    stack.pop();
    cout << "size: " << stack.size() << endl;
    cout << "top: " << stack.top() << endl;
    return 0;
}