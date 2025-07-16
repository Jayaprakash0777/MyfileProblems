/*
The name of this problem is:

"Create a Batsman Class to Calculate and Display Batting Average"


---

📌 Alternative Titles:

"Batsman Statistics Management Using C++ Classes"

"Program to Compute Batting Average of a Cricketer"

"OOP-Based Cricket Batsman Record with Average Calculation"



---

✅ Problem Overview:

You are required to create a batsman class that:

1. Takes input for:

Batsman code

Name

Number of innings

Number of not-outs

Total runs



2. Calculates the batting average using:



\text{batAvg} = \frac{\text{runs}}{\text{innings} - \text{notouts}}


---

⚠️ Notes:

You are using static_cast<float> for accurate division — this is good practice!

The calAvg() method is made private, ensuring that average calculation is encapsulated.



---

Would you like a version that handles multiple batsmen or adds validation (like checking for division by zero)?

  */
#include<iostream>
using namespace std;
class batsman
{ private:

  int bcode;
  char bName[20];
  int innings;
  int notouts;
  int runs;
  float batAvg;         
  
  void calAvg()
   { batAvg=static_cast<float>(runs)/(innings-notouts);
   }
   
   public:
   
   void readData()
    { 
      cout<<"\nEnter  the batsman information:\n";
      cout<<"\nEnter the four digit batsman code:";
      cin>>bcode;
      cin.ignore();
      cout<<"Enter the name of the batsman:";
      cin.getline(bName,20);
      cout<<"Enter the innings:";
      cin>>innings;
      cout<<"Enter notouts:";
      cin>>notouts;
      cout<<"Enter the runs:";
      cin>>runs;
      calAvg();
    }
    void displayData()
     { cout<<"\nThe Data of the batsman is:\n\n";
       cout<<"\nBatsman code:"<<bcode;
       cout<<"\nName:"<<bName;
       cout<<"\nInnings:"<<innings;
       cout<<"\nNotouts:"<<notouts;
       cout<<"\nRuns:"<<runs;
       cout<<"\nBatsman average:"<<batAvg;
       }
};
int main ()
{ batsman b;
  b.readData();
  b.displayData();
  
  return 0;
  }    
  
       
   
