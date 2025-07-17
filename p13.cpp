/*
  Question:
Write a C++ program to find the largest of two integers using an inline member function.

Requirements:

Create a class named number with two private integer variables.

Define an inline member function biggest(int, int) that returns the greater of the two integers.

In the main() function:

Prompt the user to enter two integers.

Call the biggest() function using an object of the class to determine and display the larger number.



*/
#include<iostream>
using namespace std;
class number 
{ private:

  int a;
  int b;
  
  public:
  
  int biggest(int,int);
};
inline int number::biggest(int n1,int n2)
{ 
  if(n1>n2)
  return n1;
  else 
  return n2;
}
int main()
{ number m;
  int n1,n2,l;
  cout<<"Enter two integers:";
  cout<<"\nEnter n1:";
  cin>>n1;
  cout<<"Enter n2:";
  cin>>n2;
  l=m.biggest(n1,n2);
  cout<<"\nThe biggest is:"<<l;
}

