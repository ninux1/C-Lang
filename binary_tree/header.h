//
// Created by Ninux-MC on 8/25/2017.
//

#include<stdio.h>
#include<malloc.h>

#ifndef C_LANG_HEADER_H
#define C_LANG_HEADER_H

typedef struct Node {

    int data;
    struct Node* left;
    struct Node* right;

}Node_t;

Node_t* insert_node(Node_t*, int);
void print_inorder(Node_t*);



#endif //C_LANG_HEADER_H
