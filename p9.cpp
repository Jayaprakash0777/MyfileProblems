/* 
Here's a suitable question for the given program:


---

💡 Question: Flight Fuel Management System (Using Classes in C++)

Problem Statement:

You are required to design a flight class that stores and manages details of an airline flight. The class should include the flight number, destination, distance to the destination, and the amount of fuel required. The fuel requirement depends on the distance and is determined by the following rules:

If the distance is less than or equal to 1000 km, the fuel required is 500 liters.

If the distance is more than 1000 km and less than or equal to 2000 km, the fuel required is 1100 liters.

If the distance is more than 2000 km, the fuel required is 2200 liters.


Your task is to:

1. Create a class flight with the following private data members:

flight_no (integer): Flight number

destination (string): Destination city

distance (float): Distance in kilometers

fuel (float): Fuel required in liters



2. Include the following member functions:

void CALFUEL() – A private method to calculate the required fuel based on the distance using the rules above.

void FEEDINFO() – A public method to accept the flight number, destination, and distance, and then internally call CALFUEL().

void SHOWINFO() – A public method to display all the flight details, including the calculated fuel.




Write a complete C++ program to implement the above class and demonstrate its functionality by:

Creating an object of the flight class

Taking input from the user

Displaying the output using the class methods



---

Let me know if you'd like this formatted as a test or assignment question with input/output examples!

*/
#include<iostream>
using namespace std;
class flight
{
  private:
  
  int flight_no;
  string destination;
  float distance;
  float fuel;
  
  void CALFUEL()
  { if(distance<=1000)
     fuel=500;
     else if(distance>1000 && distance<=2000)
     fuel=1100;
     else 
     fuel=2200;
  }
  
  public:
  
  void FEEDINFO()
  { cout<<"\nEnter the Data of the flight:\n";
    cout<<"Enter flight number:";
    cin>>flight_no;
    cin.ignore();
    cout<<"Enter the destination:";
    getline(cin,destination);
    cout<<"Enter the distance:";
    cin>>distance;
    CALFUEL();
  }
  
  void SHOWINFO()
  { cout<<"\nThe details of the flight is:\n";
    cout<<"\nFlight no:"<<flight_no;
    cout<<"\nDestination:"<<destination;
    cout<<"\nDistance:"<<distance;
    cout<<"\nFuel:"<<fuel;
  }
};
int main()
{   flight f;
    f.FEEDINFO();
    f.SHOWINFO();
    
    return 0;
}
