#include<iostream>
using namespace std;
class Number
{ int a,b;
  public:
  Number(int x,int y)
  { a=x;
    b=y;
  }
  void display()
  { cout<<"\na="<<a<<"\nb="<<b;
  }
  friend int  operator <(Number);
};
 int operator <(Number m)
  { if(m.a<m.b)
    cout<<m.a;
    else
    cout<<m.b;
  } 
int main ()
{ int a,b;
  cout<<"Enter two integers:";
  cin>>a>>b;
  Number n(a,b);
  n.display();
  cout<<"The smallest among two integers is:";
  <n;
  
  return 0;
}  
  
   