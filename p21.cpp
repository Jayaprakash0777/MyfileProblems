/*
A suitable and concise name for your current program is:


---

"Array-Based List Implementation with Insertion and Deletion at Specific Positions"


---

This title reflects exactly what the code does:

Takes input for a list (using a static array),

Allows insertion at a given position,

Allows deletion from a given position,

Displays the list after each operation.



---

Alternative Titles:

"C++ Program for Performing Insert and Delete Operations on a Linear List"

"Implementing a Static List with Insert and Delete Functionality"

"Basic List Operations Using Arrays in C++"


Let me know if you'd like a formal problem statement or assignment description too.


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
  
  return 0;
}  
