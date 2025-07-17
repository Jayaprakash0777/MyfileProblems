/*
Question:
Write a C++ program to manage employee records and calculate their salaries. The program should also identify employees with more than two dependents.

Requirements:

1. Create a class named EMPLOYEE with the following private data members:

employee_no (integer): Employee number

employee_name (string): Name of the employee

basic_salary (float): Basic salary

DA (float): Dearness Allowance (52% of basic salary)

IT (float): Income Tax (30% of gross salary)

gross_salary (float): Sum of basic salary and DA

net_salary (float): Gross salary minus IT

no_of_dependents (integer): Number of dependents



2. Public member functions:

getData(int n): To input employee details from the user.

displayData(int n): To calculate and display salary details for each employee.

display_dependents(int n): To display the names of employees with more than two dependents. If none, display an appropriate message.



3. In the main() function:

Prompt the user to enter the number of employees.

Use an array of EMPLOYEE objects to store and manage employee data.

Input data for all employees.

Display detailed salary information for each employee.

Display the names of employees with more than two dependents.




Note:

Ensure the program correctly calculates and displays:

DA as 52% of basic salary

Gross salary as the sum of basic salary and DA

IT as 30% of gross salary

Net salary as gross salary minus IT

Names of employees with more than two dependents.



*/
#include<iostream>
using namespace std;
class EMPLOYEE
{ private:

  int employee_no;
  string employee_name;
  float basic_salary;
  float DA;
  float IT;
  float gross_salary;
  int no_of_dependents;
  float net_salary;
  
  public:
  
  void getData(int n)
  { cout<<"\nEnter the Employee no:";
    cin>>employee_no;
    cin.ignore();
    cout<<"Enter the Employee Name:";
    getline(cin,employee_name);
    cout<<"Enter the Basic salary:";
    cin>>basic_salary;
    cout<<"Enter the No of depentents:";
    cin>>no_of_dependents;
  }
  void displayData(int n)
  { 
    DA=0.52*basic_salary;
    gross_salary=DA+basic_salary;
    IT=0.30*gross_salary;
    net_salary=(basic_salary+DA)-IT;
    cout<<"\nEmployee no:"<<employee_no;
    cout<<"\nEmployee Name:"<<employee_name;
    cout<<"\nThe Basic salary:"<<basic_salary;
    cout<<"\nDA:"<<DA;
    cout<<"\nGross salary:"<<gross_salary;
    cout<<"\nIT:"<<IT;
    cout<<"\nNet salary:"<<net_salary;
    cout<<"\nNo of departments:"<<no_of_dependents;
   
  }
 void display_dependents(int n)
 { int count=0;
 for(int i=0;i<n;i++)
  { if(no_of_dependents>2)
    { cout<<"\n"<<employee_name;
      count++;
    }
  }

  if(count==0)
  { cout<<"\nThere is no employees with more than  2 dependents";
  }
}
  
  
};

int main()
{ EMPLOYEE N[100];
int n;
  cout<<"Enter no of employees:";
  cin>>n;
  for(int i=0;i<n;i++)
  { cout<<"\nEnter the details of the employee "<<i+1<<":\n";
    N[i].getData(n);
  }
  for(int i=0;i<n;i++)
  { cout<<"\n\nThe details of the employee "<<i+1<<":\n";
    N[i].displayData(n);
  }
  for(int i=0;i<n;i++)
  { N[i].display_dependents(n);
  }
 
}
