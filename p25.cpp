/*
Sure! Here's a concise and clear question for your program:


---

🧾 Question: Student Marks Range Distribution

Write a C++ program to:

Read marks (0–200) for n students.

Validate input to ensure marks are within the range.

Count how many students fall into each of the following ranges:

0–24, 25–49, 50–74, 75–99, 100–124, 125–149, 150–174, 175–200


Display the number of students in each range in a tabular format.



---

Let me know if you want a version for exam-style or assignment sheet format!


*/
#include<iostream>
using namespace std;
int main()
{ int n,arr[100],i;
    cout<<"Enter the no of students:";
    cin>>n;
  cout<<"Enter the marks of "<<n<< "students in the range of (0-200):";
  for(i=0;i<n;i++)
   { cin>>arr[i];
     if(arr[i]>200 || arr[i]<0)
       {cout<<"Enter a valid marks and continue:";
        cin>>arr[i];
       }
   }
   int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0;
   for(i=0;i<n;i++)
    {   if(arr[i]>=0 && arr[i]<=24)
        { r1++;}
        if(arr[i]>=25 && arr[i]<=49)
        {r2++;}
        if(arr[i]>=50 && arr[i]<=74)
        {r3++;}
        if(arr[i]>=75 && arr[i]<=99)
        {r4++;}
        if(arr[i]>=100 && arr[i]<=124)
       { r5++;}
        if(arr[i]>=125 && arr[i]<=149)
        {r6++;}
        if(arr[i]>=150 && arr[i]<=174)
       { r7++;}
        if(arr[i]>=175 && arr[i]<=200)
        {r8++;}
    }
    cout<<"\t"<<"Marks range"<<"\t\t"<<"No of students";
    cout<<"\n"<<"\t"<<"0-24"<<"\t\t\t"<<r1;
    cout<<"\n"<<"\t"<<"25-49"<<"\t\t\t"<<r2;
    cout<<"\n"<<"\t"<<"50-74"<<"\t\t\t"<<r3;
    cout<<"\n"<<"\t"<<"75-99"<<"\t\t\t"<<r4;
    cout<<"\n"<<"\t"<<"100-124"<<"\t\t\t"<<r5;
    cout<<"\n"<<"\t"<<"125-149"<<"\t\t\t"<<r6;
    cout<<"\n"<<"\t"<<"150-174"<<"\t\t\t"<<r7;
    cout<<"\n"<<"\t"<<"175-200"<<"\t\t\t"<<r8;
    
    return 0;
}
