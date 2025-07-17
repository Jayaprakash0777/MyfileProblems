/*
factorial recursion 
*/
#include<iostream>
using namespace std;
int print (int n)
{ 
  if(n<=0)
  return 1;
  else
   return n*print (n-1);
  
 }
  
int main()
{ 
  int n;
  cout << "Enter n:" << endl;
  cin>>n;
  
  int result=print(n);
  cout << "The fatorial of "<<n<<" is:"<<result<< endl;
}
