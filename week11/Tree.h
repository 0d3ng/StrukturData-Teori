/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 28, 2018 6:15:19 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

/* 
 * File:   Tree.h
 * Author: od3ng
 *
 * Created on December 28, 2018, 6:15 AM
 */

#include <iostream>

using namespace std;

#ifndef TREE_H
#define TREE_H

struct NodeTree {
    int data;
    NodeTree* left, *right;

    NodeTree(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void printPostorder(struct NodeTree* node);
void printInorder(struct NodeTree* node);
void printPreorder(struct NodeTree* node);

#endif /* TREE_H */

