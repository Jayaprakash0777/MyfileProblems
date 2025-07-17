/*
A suitable and descriptive name for your combined code functionality is:


---

🧾 "Array-Based List Implementation with Insertion, Deletion, Search, and Utility Operations"

Or alternatively:

"Implementing and Managing a Linear List with Basic Operations in C++"


---

If you're looking for an assignment-style or textbook-like title, here are some clear options:

1. "Menu-Driven Program for Array-Based List Operations in C++"


2. "C++ Class for List Manipulation: Insert, Delete, Search, Sort Check, Max/Min"


3. "Object-Oriented Implementation of List Operations Using Static Arrays"


4. "List ADT (Abstract Data Type) Implementation with Array in C++"



Let me know if you want a problem statement or assignment description based on this code too — I can write that up as well.


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
int find_position(int item) {
        for (int i = 0; i < n; ++i) {
            if (list[i] == item) {
                return i+1; 
            }
        }
        return -1; 
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
  cout << "Position of 3: " << o.find_position(3) << endl;
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
}
#include <iostream>
#include <vector>

using namespace std;

class LIST {
private:
    vector<int> elements;

public:
    // Constructor
    LIST() {}

    // Method to add an element to the list
    void add(int item) {
        elements.push_back(item);
    }

    // Method to find the position of an item
    int find_position(int item) {
        for (size_t i = 0; i < elements.size(); ++i) {
            if (elements[i] == item) {
                return i; 
            }
        }
        return -1; 
    }

    // Method to display the elements of the list
    void display() {
        for (int element : elements) {
            cout << element << " ";
        }
        cout << endl;
    }
};

int main() {
    LIST myList;
    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.add(4);
    myList.add(5);

    cout << "Position of 3: " << myList.find_position(3) << endl; // Output: 2
    cout << "Position of 6: " << myList.find_position(6) << endl; // Output: -1

    return 0;
}*/
