#include<iostream>
using namespace std;
class COMPLEX
{ float x,y;
  public:
  COMPLEX(int a,int b)
  { x=a;y=b;
  }
  void displayComplex()
  { cout<<"\n\nThe complex number is:"<<x<<"+"<<y<<"i";
  }
  COMPLEX operator+(COMPLEX &c)
  { COMPLEX sum(0,0);
    sum.x=x+c.x;
    sum.y=y+c.y;
    return sum;
  }
  COMPLEX operator-( COMPLEX &c)
  { COMPLEX sub(0,0);
    int choice;
    cout<<"\nEnter 1 for subract c1-c2 (or) Enter 0 for subract C2-C1:";
    cin>>choice;
    if(choice==1)
    { sub.x=x-c.x;
      sub.y=y-c.y;
      return sub;
    }
    if(choice==0)
    { sub.x=c.x-this->x;
      sub.y=c.y-this->y;
      return sub;
    }  
  }
  COMPLEX operator*(const COMPLEX &c)
  { COMPLEX mult(0,0);
    mult.x=(this->x*c.x)+(this->y*c.y*-1);
    mult.y=(this->x*c.y)+(this->y*c.x);
    return mult;
  }
  COMPLEX operator/(const COMPLEX &c)
  { COMPLEX divide(0,0);
    divide.x=((this->x*c.x)+(this->y*c.y*-1))/((c.x*c.x)-(c.y*c.y));
    divide.y=(this->x*c.y)+(this->y*c.x)/((c.x*c.x)-(c.y*c.y));
    return divide;
  }
};
int main ()
{ COMPLEX c1(7,6),c2(8,9);

  c1.displayComplex();   
  c2.displayComplex(); 
  
  COMPLEX summ=c1+c2;
  summ.displayComplex();
  
  COMPLEX subb=c1-c2;
  subb.displayComplex();
  
  COMPLEX multt=c1*c2;
  multt.displayComplex();
  
  COMPLEX divide=c1/c2;
  divide.displayComplex();
  return 0;
}  
  
      