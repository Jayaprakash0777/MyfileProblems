/*
The name of this problem is:

"Implementation of a Custom Integer List with Basic Operations"


---

📌 Alternative Titles:

"Class-Based Array List with Insert, Delete, Search, and Utility Functions"

"Menu-less Implementation of Array-Based List ADT in C++"

"Custom List Data Structure with Extended Functionalities"



---

✅ Features Implemented:

The LIST class you’ve written provides the following operations on an integer array:

1. Insertion at a specific position


2. Deletion from a specific position


3. Finding the largest and smallest elements


4. Checking if the list is sorted


5. Finding the position of a given element


6. Rotating the list to the right by K positions


7. Finding the largest absolute difference between consecutive elements


8. Displaying the list




---

⚠️ Issues in Code (Important Fixes):

1. rotate_right(int K):

You're using list.empty() and list.size(), which work with STL containers, not raw arrays.

You should replace with checks using n (size of list).

Replace:

if (list.empty() || K == 0) return;
K = K % list.size();
std::rotate(list.rbegin(), list.rbegin() + K, list.rend());

With logic manually handling rotation on list[100] based on n.



2. Unclosed function: largest_difference() is missing a closing brace }.


3. Incorrect object reference in main():

You wrote myList.largest_difference() instead of o.largest_difference().



4. Optional: Add proper error checking for out-of-bound insert/delete positions.




---

Would you like me to correct the code and provide a clean, working version with all issues fixed?

*/
#include<iostream>
#include <algorithm>
#include <cmath>
#include <limits>
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
    void rotate_right(int K) {
        if (list.empty() || K == 0) return;

        K = K % list.size();  // Handle cases where K > elements.size()

        std::rotate(list.rbegin(), list.rbegin() + K, list.rend());
    }
    int largest_difference() {
        if (list.size() < 2) return 0;

        int max_diff = numeric_limits<int>::min();
        for (int i = 1; i <list.size(); ++i) {
            int diff = abs(list[i] - list[i - 1]);
            if (diff > max_diff) {
                max_diff = diff;
            }
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
  o.rotate_right(2);

   /* cout << "List after rotating right by 2 positions: ";
    o.display();*/
    cout << "Largest difference between consecutive numbers: " << myList.largest_difference() << endl;
  return 0;
}  
