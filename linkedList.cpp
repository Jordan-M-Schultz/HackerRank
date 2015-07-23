//
//  LinkedList.cpp
//  
//
//  Created by Jordan Schultz on 7/23/15.
//
//

#include <stdio.h>


/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as
*/

struct Node
{
    int data;
    struct Node *next;
}



Node* InsertBack(Node *head,int data)
{
    Node* start = head;
    Node* insert = new Node;
    insert->data = data;
    
    if(!head)
    {
        return insert;
    }else{
        
        while(head->next)
            head = head->next;
        
        head->next = insert;
        
        return start;
        
    }//else
}
Node* InsertFront(Node *head,int data)
{
    Node * insert = new Node;
    insert -> data = data;
    
    if(!head)
    {
        return insert;
    }else{
        insert->next = head;
        return insert;
    }
    
}

void Print(Node *head)
{
    Node* placement = head;
    int sum = 0;
    
    while(placement)
    {
        if( placement->data)
            cout<< placement->data<<endl;;
        
        
        placement = placement->next;
    }//while
    
}