//
//  LinkedList.cpp
//  
//
//  Created by Jordan Schultz on 7/23/15.
//
//

#include <stdio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
/*
 Insert Node at the end of a linked list
 head pointer input could be NULL as well for empty list
 Node is defined as:
*/
void testReverse(Node * head);
void insertData();


struct Node
{
    int data;
    struct Node *next;
};


Node* Delete(Node *head, int position)
{
  Node * current = head;
  Node * prev = head;
  
  if(position ==0)
  {
    current = current->next;
    delete head;
    return current;
  }    
    
    
  for(int i = 0 ; i < position ; i++)
  {
     prev = current;
     current=current->next;   
  }  
    
  prev->next = current->next;  
    
  delete current;
  return head;
    
}

Node* InsertNth(Node *head, int data, int position) {
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


void ReversePrint(Node *head)
{
  //first loop to find final node beginning from head
  short count = 0;
  Node* current = new Node;
  current = head;
  
  while(current){
    current = current->next;
    count++;
  }//while
    
  while(count) // loops node # times
  {
    current = head;
      for(int i = 0 ; i < count-1 ; i++)
      current = current->next;  
        
    cout << current->data << endl;
    count--;
    
  }//while count   
       
}


Node* Reverse(Node *head)
{
  if(!head)
    return NULL;
    
  if(!head->next)
     return head;
    
  bool flag = true; 
  Node* curr = new Node;
  Node* prev = new Node; 
  
  curr = head;
  prev = curr;
    
  while(head){
      prev = curr;
      curr = head;
      head = head->next;
      curr->next = prev;
      
      if(flag)
      {
        curr->next = NULL;
        flag = false;
      }
    
      
  }
 
  head = curr;
  head->next = prev;
  //testReverse(head);
  
    
  // Complete this method
  return head;
}

void testReverse(Node * head)
{
  while(head){
    cout << head->data << " -> " ;
    head = head->next;
  }  
    
    
}

void insertData(){
    cout << "own test" << endl;
    
    Node * one = new Node;
    Node * two = new Node;
    one->data = 1;
    one->next = NULL;
    Reverse(one);
    
    
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
