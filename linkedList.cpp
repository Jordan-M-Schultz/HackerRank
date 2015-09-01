//
//  LinkedList.cpp
//  
//
//  Created by Jordan Schultz on 7/23/15.
//
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdio.h>

/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as:
*/

struct Node
{
    int data;
    struct Node *next;
}

Node* InsertNth(Node *head, int data, int position) {
    cout << "lol " << endl;
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL && position != 0) {
        return head;
    } else if(head == NULL && position == 0) {
        head = newNode;
        return head;
    }

    if(position == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* current = head;
    Node* previous = NULL;
    int i = 0;

    for(i = 0; i < position; i++) {
        previous = current;
        current = current->next;
        if(current == NULL)
            break;
    }

    newNode->next = current;
    previous->next = newNode;
    return head;

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