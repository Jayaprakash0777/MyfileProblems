/*
The name of this problem is:

"Create a Student Class to Store and Display Student Information with Total Marks"


---

📌 Alternative Titles:

"Student Record Management Using Classes in C++"

"Student Marks Entry and Total Calculation Program"

"C++ Class for Managing Student Data and Computing Total"



---

✅ Problem Overview:

You are tasked with creating a student class that:

1. Stores student details:

Admission number

Name

Marks in English, Maths, and Science



2. Calculates the total marks using a separate method.


3. Displays the full student information neatly.




---

🚀 Common Use Case:

This type of program is typical in object-oriented programming (OOP) practice exercises, especially to:

Understand encapsulation

Learn how to use cin.getline() for string input

Separate functionality via multiple class methods (TakeData, Ctotal, showData)


Let me know if you'd like an extended version that handles multiple students using arrays or file storage.

*/

#include<iostream>
using namespace std;
class student{ private:

               int Admno;
               char Sname[20];
               float English;
               float Maths;
               float Science;
               float Total;
               
               public:
               
               void TakeData()
               { cout<<"Enter the informations of the student:"<<"\n\n";
                 cout<<"Enter the admission no:";
                 cin>>Admno;
                 cin.ignore();
                 cout<<"Enter the name:";
                 cin.getline(Sname,20);
                 cout<<"Enter the English marks:";
                 cin>>English;
                 cout<<"Enter the Maths marks:";
                 cin>>Maths;
                 cout<<"Enter the Science marks:";
                 cin>>Science;
                 }
                 void Ctotal()
                 { Total=English+Maths+Science;
                  } 
                 void showData()
                 { cout<<"\nThe information of the student is:\n\n";
                   cout<<"Admission Number:"<<Admno<<"\n";
                   cout<<"Name:"<<Sname<<"\n";
                   cout<<"English marks:"<<English<<"\n";
                   cout<<"Maths marks:"<<Maths<<"\n";
                   cout<<"Science marks:"<<Science<<"\n";
                   cout<<"Total marks:"<<Total<<"\n";
                   }
   };
int main ()
{   student s;
      s.TakeData();
      s.Ctotal();
      s.showData();
      
      return 0;
      }
      
                   
               
