/* Here's a suitable question for the given program:


---

💡 Question: Find the Difference Between Two Integers Using a Class in C++

Problem Statement:

Create a C++ program using a class Number to read two integers from the user and display the absolute difference between them.


---

🔧 Class Specification:

Define a class Number with the following members:

Private Data Members:

int n1 – to store the first number

int n2 – to store the second number


Public Member Functions:

1. void readInput() –
Prompts the user to input values for n1 and n2.


2. void diff(Number& o) –
Computes and displays the absolute difference between the two numbers stored in the object o.
Use the condition:

If n1 > n2, difference = n1 - n2

Else, difference = n2 - n1





---

🧪 Sample Input/Output:

Enter n1: 25
Enter n2: 40

The difference two integers is: 15


---

📌 Notes:

The function diff() takes the object by reference and accesses its own private members.

This exercise helps practice working with classes, objects, function parameters, and basic arithmetic in C++.



---

Would you like me to enhance this into a multi-object version or add validation (e.g., no negative inputs)?

  */
#include<iostream>
using namespace std;
class Number
{ private:

  int n1;
  int n2;
  
  public:
  
  void readInput()
  { cout<<"Enter n1:";
    cin>>n1;
    cout<<"Enter n2:";
    cin>>n2;
  }
  
  void diff(Number& o)
  { 
    if(o.n1>o.n2)
    cout<<"\nThe difference two integers is:"<<n1-n2;
    else
    cout<<"\nThe difference two integers is:"<<n2-n1;
  }
};

int main()
{  Number o;
   o.readInput();
   o.diff(o);
   
   return 0;
}
