/*
Question:
Write a C++ program to manage student information and determine their pass/fail status based on their total marks.

Requirements:

Create a class student with the following private data members:

rollno (integer)

name (string)

address (string)

total_marks (float)


Include the following public member functions:

getData() – to input student details from the user.

displayData() – to display the student's details.

checkpass(student s[100], int passing_marks = 50) – to check if the student has passed. The default passing mark is 50, but for the second student (index 1), check with a passing mark of 60.


In the main() function:

Prompt the user to enter the number of students.

Use an array of student objects to store the data of all students.

Input and display each student's data.

Check and display whether each student passed or failed.




*/
#include<iostream>
using namespace std;
class student 
{ private:

  int rollno;
  string name;
  string address;
  float total_marks;
  
  public:
  
  void getData()
  { cout<<"\nRoll no:";
    cin>>rollno;
    cin.ignore();
    cout<<"Name:";
    getline(cin,name);
    cout<<"Enter the address:";
    getline(cin,address);
    cout<<"Enter the total marks:";
    cin>>total_marks;
  }
  void displayData()
  { cout<<"\nRollno:"<<rollno;
    cout<<"\nName:"<<name;
    cout<<"\nEnter the address:"<<address;
    cout<<"\nEnter the total marks:"<<total_marks<<"\n";
  }
  
  void checkpass(student s[100],int passing_marks=50)
  { if(total_marks>=passing_marks)
    cout<<"Passed";
    else
    cout<<"Failed";
  }
};

int main()
{ student s[100];
  int n;
  cout<<"Enter no of students:";
  cin>>n;
  for(int i=0;i<n;i++)
  { cout<<"\nEnter the details of the student "<<i+1<<":\n";
    s[i].getData();
  }
  for(int i=0;i<n;i++)
  { cout<<"\n\nThe details of the student "<<i+1<<":\n";
    s[i].displayData();
    cout<<"Result:";
    if(i==1)
    s[i].checkpass(s,60);
    else
    s[i].checkpass(s);
  }
}
