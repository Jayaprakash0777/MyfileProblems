/*
Question:
Write a C program to implement a doubly linked list with operations for inserting, deleting, and displaying elements.

Requirements:

1. Define a structure lnode to represent each node in the doubly linked list with the following members:

data: stores an integer value

prev: pointer to the previous node

next: pointer to the next node



2. Implement the following functions:

insertAtBeginning(int val): Inserts a new node with the given value at the beginning of the list.

insertAtPosition(int pos, int val): Inserts a new node with the given value at the specified position (pos) in the list.

deleteAtPos(int pos): Deletes the node at the specified position.

display(): Displays the elements of the list from head to tail.

displayrev(): Displays the elements of the list from tail to head.



3. In the main() function:

Insert multiple elements at the beginning.

Display the list.

Delete a node at a given position.

Display the list again in both forward and reverse order.




Notes:

Handle edge cases such as invalid positions and empty lists.

Ensure proper memory allocation and deallocation using malloc() and free().


Optional (commented out in the code):

insertAtEnd(int val): A function to insert a node at the end.

reverse(): A function to reverse the entire list (not applicable for doubly linked list as shown; kept for reference).



*/
#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode* prev;
    struct lnode* next;
};

typedef struct lnode node;
node* head = NULL;
node* tail = NULL;


void insertAtBeginning(int val) {
    node* NewNode = (node*)malloc(sizeof(node));
    if (NewNode == NULL) {
        printf("Out of memory\n");
        return;
    }
    NewNode->data = val;
    if (head == NULL) {
        NewNode->next = NULL;
        head = NewNode;
        NewNode->prev = NULL;
        tail =NewNode;
    }
     else {
        NewNode->next = head;
        head->prev=NewNode;
        head = NewNode;
        NewNode->prev=NULL;
    }
u    printf("The value %d is inserted at beginning\n", val);
}

void display() {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }
    node* temp = head;
    printf("\nThe elements in the list are:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayrev() {
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }
    node* temp = tail;
    printf("\nThe elements in the list are in rev:\n");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

void insertAtPosition(int pos,int val)
{ if(pos==0)
{
    insertAtBeginning(val);
    return;
}
  node* Newnode=(node*)malloc(sizeof(node));
  if (Newnode == NULL) {
        printf("Out of memory\n");
        return;
    }
   Newnode->data=val;
   node* temp=head;
   for(int i=0;i<pos-1;i++)
   {
       temp=temp->next;
       if(temp==NULL)
       {
           printf("\nInvalid position");
           return;
       }
   }
   Newnode->next=temp->next;
   if(temp->next==NULL)
    tail=Newnode;
   else
   temp->next->prev=Newnode;

   temp->next=Newnode;
   Newnode->prev=temp;
   printf("inserted at %d position  by %d",pos,val);
}

void deleteAtPos(int pos)
{ if(head==NULL)
  {
      printf("list is empty");
      return;
  }

  node* temp=head;
  node* prev;
  if(pos==0)
  {
      head=head->next;
      head->prev=NULL;
      printf("deleted the %d position",temp->data);
      free(temp);
      return ;
  }
  for(int i=1;i<=pos;i++)
  {
      prev=temp;
      temp=temp->next;
      if(temp==NULL)
      {
          printf("Invalid position");
          return;
      }

  }
  prev->next=temp->next;
  if(temp->next==NULL)
  {
      tail=prev;
  }
  else
     temp->next->prev=prev;

      printf("deleted the %d position",pos);
      free(temp);

}
/*void insertAtend(int val)
{
    int count=0;
    if (head == NULL) {
        printf("The list is empty\n");
        return;
    }
    node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("\n\ncount=%d",count);


    node* Newnode=(node*)malloc(sizeof(node));
  if (Newnode == NULL) {
        printf("Out of memory\n");
        return;
    }
   Newnode->data=val;
   node* tempp=head;
   for(int i=0;i<count-1;i++)
   {
       tempp=tempp->next;
   }
   Newnode->next=tempp->next;
   tempp->next=Newnode;
   printf("\ninserted at %d at end",val);
}

void reverse()
{ node* prev=NULL;
  node* current=head;
  node* nextt=head->next;

  while(current!=NULL)
  {
      nextt=current->next;
      current->next=prev;
      prev=current;
      current=nextt;
  }
  head=prev;

}*/
int main() {
    insertAtBeginning(7);
    insertAtBeginning(8);
    insertAtBeginning(9);
    insertAtBeginning(10);
    insertAtBeginning(12);
    insertAtBeginning(13);
    insertAtBeginning(14);
    display();
    /*insertAtPosition(7,100);
    display();*/
    deleteAtPos(0);
    display();
    displayrev();
    return 0;
}
