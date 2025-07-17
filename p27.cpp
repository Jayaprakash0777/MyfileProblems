/*
Sure! Here's a short and clear question for your program:


---

🧾 Question: Perform Operations on Rational Numbers

Write a C++ program using a class Rational to perform the following operations on two rational numbers:

Addition

Subtraction

Multiplication

Division


Each result should be simplified and displayed in the form numerator/denominator. Use appropriate member functions to implement each operation.


---

Let me know if you'd like the question in formal assignment format or want the code corrected (there's a bug in the subtraction method).


*/
#include<iostream>
using namespace std;
class Rational
{ private:
  
  int numerator;
  int denominator;
  
  public:
  
  Rational(int a=0 ,int b=0 )
  { numerator=a;
    denominator=b;
  }
  void addRational(Rational &r1,Rational &r2)
  { //int rn,rd;
    numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
    denominator=r1.denominator*r2.denominator;
    for(int i=numerator+denominator;i>1;i--)
    { if(numerator%i==0 && denominator%i==0)
       { numerator=numerator/i;
         denominator=denominator/i;
       }
    }
    cout<<"\nsum :"<<numerator<<"/"<<denominator;
  }
 void subRational(Rational &r1,Rational &r2)
  { //int rn,rd;
    numerator=(r1.numerator*r2.denominator)-(r1.numerator*r2.denominator);
    denominator=r1.denominator*r2.denominator;
    for(int i=numerator+denominator;i>1;i--)
    { if(numerator%i==0 && denominator%i==0)
       { numerator=numerator/i;
         denominator=denominator/i;
       }
    }
    cout<<"\nsub :"<<numerator<<"/"<<denominator;
  }
  void multiplyRational(Rational &r1,Rational &r2)
  { //int rn,rd;
    numerator=r2.numerator*r1.numerator;
    denominator=r1.denominator*r2.denominator;
    for(int i=numerator+denominator;i>1;i--)
    { if(numerator%i==0 && denominator%i==0)
       { numerator=numerator/i;
         denominator=denominator/i;
       }
    }
    cout<<"\nmultiply :"<<numerator<<"/"<<denominator;
  }
  void divideRational(Rational &r1,Rational &r2)
  { //int rn,rd;
    numerator=r1.numerator*r2.denominator;
    denominator=r2.numerator*r1.denominator;
    for(int i=numerator+denominator;i>1;i--)
    { if(numerator%i==0 && denominator%i==0)
       { numerator=numerator/i;
         denominator=denominator/i;
       }
    }
    cout<<"\ndivide :"<<numerator<<"/"<<denominator;
  }
};
int main()
{ Rational r1(2,4),r2(3,6),r3;
  r3.addRational(r1,r2);
  r3.subRational(r1,r2);
  r3.multiplyRational(r1,r2);
  r3.divideRational(r1,r2);
}
