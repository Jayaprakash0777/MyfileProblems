/*The name of the problem is: 

"Find and Print All Perfect Numbers from 1 to 1000".

Explanation:

A perfect number is a positive integer that is equal to the sum of its proper positive divisors (excluding the number itself). For example:

6 is a perfect number because 

28 is a perfect number because 


Your code checks each number from 1 to 1000 to see if it meets that condition and prints it if it does.

*/

#include<iostream>
using namespace std;
int isperfect(int n)
{ int i,sum=0,m;

for(i=1;i<n;i++)  
   { m=n;  
     if(m%i==0)  
      sum+=i;  
      }  
      if(sum==n)  
       return 1;  
       else  
       return 0;  
       }

int main ()
{ int i;
for(i=1;i<=1000;i++)
{ if(isperfect(i)==1)
cout<<i<<"\n";
}
}   
