/*
Question:
Write a C++ program to implement a complex class that performs addition of complex numbers using different types of function overloading, including:

1. Adding an integer to a complex number (using a friend function).


2. Adding two complex numbers (using a friend function).


3. Adding two complex numbers (using a member function).



The class should include:

Private members to store the real and imaginary parts.

A constructor to initialize the complex number to 0.

A set() function to assign values.

A disp() function to display the complex number in a + bi format.

Overloaded ADD() functions as described above.


Demonstrate all three types of additions in the main() function.
*/
#include<iostream>
using namespace std;

class complex {
private:
    float real;
    float imag;

public:
    
    complex() {
        real = 0.0;
        imag = 0.0;
    }

    
    void set(float r, float i) {
        real = r;
        imag = i;
    }

    
    void disp() {
        cout << real << " + " << imag << "i";
    }

    
    friend complex ADD(int a, complex s2) {
        complex result;
        result.real = a + s2.real;
        result.imag = s2.imag;
        return result;
    }

    
    friend complex ADD(complex s1, complex s2) {
        complex result;
        result.real = s1.real + s2.real;
        result.imag = s1.imag + s2.imag;
        return result;
    }

    
    complex ADD(complex s2) {
        complex result;
        result.real = real + s2.real;
        result.imag = imag + s2.imag;
        return result;
    }
};

int main() {
    complex c1, c2, c3, c4;


    c1.set(2.5, 3.7);
    c2.set(1.2, 4.8);

    
    cout << "c1 = ";
    c1.disp();
    cout << endl;
    cout << "c2 = ";
    c2.disp();
    cout << endl;

    
    c3 = ADD(5, c1);
    cout << "c3 = ";
    c3.disp();
    cout << endl;

    
    c4 = ADD(c1, c2);
    cout << "c4 = ";
    c4.disp();
    cout << endl;

    
    c3 = c1.ADD(c2);
    cout << "c3 = ";
    c3.disp();
    cout << endl;

    return 0;
}
