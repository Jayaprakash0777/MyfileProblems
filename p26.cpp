/*
Sure! Here's a short and clear question for your program:


---

🧾 Question: Calculate Hypotenuse Using Pythagoras Theorem

Write a C++ program to read the adjacent and opposite sides of a right-angled triangle and calculate the hypotenuse using the Pythagorean theorem:

\text{hypotenuse} = \sqrt{(\text{adjacent}^2 + \text{opposite}^2)}

Display the result. Use a separate function to compute the hypotenuse.


---

Let me know if you want it styled for assignments or quizzes!

*/
#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(double adj, double opp)
{ return sqrt((adj*adj)+(opp*opp));
}
int main()
{ double adj,opp;
   cout<<"Enter the adjecent and opposite sides:";
   cin>>adj>>opp;
  double hyp;
   hyp=hypotenuse(adj,opp);
   cout<<"The hypotenuse of the given"<<"\n"<<"two sides is:"<<hyp;
   }
   
