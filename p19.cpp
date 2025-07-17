/*
A suitable name for the problem you've implemented would be:

"Operations on a Linear List (Array)"

Or more specifically:

"Implementing a List with Insertion, Deletion, Search, and Sort Check in C++"

This title reflects the key operations performed in your code:

Insertion at a specific position

Deletion at a specific position

Finding the largest and smallest elements

Checking if the list is sorted

Displaying the list contents


If you need a more academic or assignment-style title:

"Menu-Driven Program for List Manipulation Using Arrays in C++"

Let me know if you'd like it to be restructured as a formal assignment problem statement or description.


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
   bool isSorted() {
    for (int i = 0; i < n - 1; i++) {
        if (list[i] > list[i + 1]) {
            return false;
        }
    }
    return true;
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
  if (o.isSorted()) {
        cout << "\nThe array is sorted." << endl;
    } else {
        cout << "\nThe array is not sorted." << endl;
    }
  
  return 0;
}  
/*#include <iostream>
using namespace std;

// Function to check if the array is sorted
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}*/
