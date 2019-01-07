/*
 * Teori

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 28, 2018 6:20:57 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>
#include "Tree.h"

using namespace std;


void printPostorder(NodeTree* node) {
    if (node==NULL) {
        return ;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}

void printInorder(NodeTree* node) {
    if (node==NULL) {
        return ;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(NodeTree* node) {
    if (node==NULL) {
        return ;
    }
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);

}