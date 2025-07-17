/*

Question:
Write a C++ program to calculate the square and cube of a given integer using inline member functions.

Requirements:

Create a class named Number with two private integer variables.

Define two inline member functions:

square(int) to return the square of a number.

cube(int) to return the cube of a number.


In the main() function:

Prompt the user to enter an integer.

Use an object of the Number class to call the square() and cube() functions.

Display the results.


*/
#include<iostream>
using namespace std;
class Number 
{ private:

  int a;
  int b;
  
  public:
  
  int square(int);
  int cube(int);
};
inline int Number::square(int n)
{ 
  return n*n;
}
inline int Number::cube(int n)
{ 
  return n*n*n;
}
int main()
{ Number m;
  int n,c,s;
  cout<<"Enter an integer:";
  cin>>n;
  s=m.square(n);
  c=m.cube(n);
  cout<<"\nThe square is:"<<s;
  cout<<"\nThe cube is:"<<c;
}
