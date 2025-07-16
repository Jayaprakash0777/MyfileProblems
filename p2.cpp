/*
The name of this problem is:
"Replace Each Array Element with Product of Its Adjacent Elements"


---

🔍 Problem Description (based on your code):

You are given an array of n integers. The task is to alter each element of the array such that:

For the first element (i == 0), it is replaced by the product of the first and second elements.

For the last element (i == n - 1), it is replaced by the product of the last and second-last elements.

For all other elements (0 < i < n - 1), it is replaced by the product of its previous and next elements.



---

⚠️ Bug Notice:

There's a mistake in this line:

if(i=n-1)

This should be:

if(i == n-1)

Because = is an assignment operator, and == is the equality comparison operator.


---
  */

#include<iostream>
using namespace std;
int main ()
{ int n,arr[10];
  cout<<"Enter n:";
  cin>>n;
  cout<<"\nEnter array elements:";
  for(int i=0;i<n;i++)
  { cin>>arr[i];
  }
  cout<<"\nThe array elements are:";
  for(int i=0;i<n;i++)
  { cout<<arr[i]<<"\t";
  }
  for(int i=0;i<n;i++)
  { if(i==0)
    arr[i]=arr[i]*arr[i+1];
    if(i=n-1)
    arr[i]=arr[i]*arr[i-1];
    else 
    arr[i]=arr[i-1]*arr[i+1];
  }
  cout<<"\nThe altered array elements are:";
  for(int i=0;i<n;i++)
  { cout<<arr[i]<<"\t";
  } 
     
   return 0;
 }   
  
