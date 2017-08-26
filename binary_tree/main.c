//
// Created by Ninux-MC on 8/25/2017.
//


#include "header.h"

int main()
{
    Node_t* tree=NULL;

    // Add Nodes to the Binary tree. Inorder. L-R-R
    for(int i=0;i<5;i++)
        tree = insert_node(tree, i+1);

    // Print the Binary Tree Traversal Inorder , Preorder and Postorder.
    print_inorder(tree);
    //print_preorder(root);
    //print_postorder(root);

    return 0;
}