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
#include "week9/Queue.h"
#include "week10/DoubleLinkedList.h"
#include "week11/Tree.h"

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

    //    cout << "Sample stack STL" << endl;
    //    cout << "---------------------" << endl;
    //    stack<int> stack;
    //    stack.push(1);
    //    stack.push(2);
    //    stack.push(3);
    //    cout << "size: " << stack.size() << endl;
    //    cout << "top: " << stack.top() << endl;
    //    stack.pop();
    //    cout << "size: " << stack.size() << endl;
    //    cout << "top: " << stack.top() << endl;

    //    pertemuan ke-9
    //    ==========================================
    //    Queue queue;
    //    queue.enQueue(1);
    //    queue.enQueue(2);
    //    queue.enQueue(3);
    //    queue.enQueue(4);
    //    queue.enQueue(5);
    //    queue.display();

    //    pertemuan ke-10
    //    ============================================
    //    DoubleLinkedList dll;
    ////    dll.addFromHead(1);
    //    dll.addFromHead(3);
    //    dll.addFromHead(2);
    //    dll.addFromHead(4);
    //    dll.addFromHead(1);
    ////    dll.printFromHead();
    //    dll.printFromTail();

    NodeTree *root = new NodeTree(1);
    root->left = new NodeTree(2);
    root->right = new NodeTree(5);
    root->left->left = new NodeTree(3);
    root->left->right = new NodeTree(4);
    root->right->left = new NodeTree(6);
    root->right->right = new NodeTree(7);
    cout << "Preorder" << endl;
    printPreorder(root);
    cout << endl << "Inorder" << endl;
    printInorder(root);
    cout << endl << "Postorder" << endl;
    printPostorder(root);
    return 0;
}