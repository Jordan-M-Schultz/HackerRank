/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
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




