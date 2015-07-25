//
//  BinaryTree.cpp
//  
//
//  Created by Jordan Schultz on 7/25/15.
//
//

#include <stdio.h>


struct node
{
    int data;
    node* left;
    node* right;
};

void Preorder(node *root) { //prints data recursively using preorder traversal
    
    if(!root)
        return;
    
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
    
    
}