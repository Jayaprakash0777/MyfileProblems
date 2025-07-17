/*
Question:
Write a C++ program to implement a list using an array with basic operations such as insertion, deletion, finding the largest and smallest elements, and displaying the list.

Requirements:

1. Create a class LIST with:

A private integer array list[100]

An integer n to store the number of elements



2. In the constructor, prompt the user to:

Enter the size of the list (n)

Input n elements into the list



3. Implement the following member functions:

insertAtposition(int pos, int val): Inserts a value at the specified position (1-based index), shifting elements to the right.

deleteAtposition(int pos): Deletes the element at the specified position (1-based index), shifting elements to the left.

findLargest(): Finds and displays the largest element in the list.

findSmallest(): Finds and displays the smallest element in the list.

display(): Displays the list elements.



4. In the main() function:

Create an object of the LIST class.

Call the display() function.

Insert an element (100) at position 2.

Delete the element at position 3.

Display the list after each operation.

Display the largest and smallest elements in the list.




Notes:

Ensure all operations maintain the integrity of the list.

Assume valid inputs for position and size constraints (maximum size 100).



*/
#include<iostream>
using namespace std;
class LIST
{ int n,list[100];
  public:
  LIST()
  { cout<<"\nEnter size of the list:";
    cin>>n;
    cout<<"\nEnter the list elements:";
    for(int i=0;i<n;i++)
    { cin>>list[i];
     } 
  }
  void insertAtposition(int pos,int val)
  { for(int i=n;i>=pos;i--)
      { list[i]=list[i-1];
       }
       list[pos-1]=val;
       n++;
  }
  void deleteAtposition(int pos)
  { for(int i=pos-1;i<n;i++)
      { list[i]=list[i+1];
       }
       
       n--;
  }     
  void findLargest()
  { int lar=list[0];
    for(int i=0;i<n;i++)
    { if(lar<list[i])
       {lar=list[i];
        }
     }
     cout<<"\nlargest:"<<lar;
   }  
  void findSmallest()
  { int small=list[0];
    for(int i=0;i<n;i++)
    { if(small>list[i])
       {small=list[i];
        }
     }
     cout<<"\nsmallest:"<<small;
   }       
  void display()
  { cout<<"\nThe given list is:";
    for(int i=0;i<n;i++)
      { cout<<list[i]<<" ";
       }
  }      
};
int main ()
{ LIST o;
  o.display();
  o.insertAtposition(2,100);
  o.display();
  o.deleteAtposition(3);
  o.display();
  o.findLargest();
  o.findSmallest();
  
  return 0;
}  
