//
// Created by Ninux-MC on 8/25/2017.
//

#include "header.h"

// This is Binary tree and not a binary search tree so the addition of the elements
// take place root-insert left-insert right. i.e level wise instead of BST where lower than root value goes to left and higher than root
// value goes right of root.

Node_t* insert_node(Node_t* root, int key)
{
    Node_t* tptr = root;

        if (tptr == NULL) {
            tptr = (Node_t *) malloc(sizeof(Node_t));
            tptr->data = key;
            tptr->left = NULL;
            tptr->right = NULL;
            root = tptr;
        } else {
            while(tptr != NULL) {
                if (tptr->left == NULL) {
                   struct Node *node = (struct Node *) malloc(sizeof(struct Node));
                   node->data = key;
                   node->right = NULL;
                   node->left = NULL;
                   tptr->left = node;
                   break;
                }
                if (tptr->right == NULL) {
                   struct Node *node = (struct Node *) malloc(sizeof(struct Node));
                   node->data = key;
                   node->left = NULL;
                   node->right = NULL;
                   tptr->right = node;
                   break;
                }
                tptr = tptr->left;
            }
        }
    return root;
}

void print_inorder(Node_t* t_ptr)
{
       if (t_ptr->left != NULL)
            print_inorder(t_ptr->left);
        printf("%d ", t_ptr->data);
        if (t_ptr->right != NULL)
            print_inorder(t_ptr->right);
}

//void preorder(Node* root){}
//void postorder(Node* root){}