/*
Sure! Based on your C++ program, here is a well-structured question (problem statement) suitable for an assignment or exam:


---

Problem Statement: Matrix-Vector Multiplication Using Friend Function in C++

You are required to write a C++ program that performs the multiplication of a matrix and a vector using two separate classes: matrix and vector. The following conditions must be met:

Requirements:

1. Define two classes:

matrix: Represents a 2D matrix of integers.

vector: Represents a 2D vector (can be treated as a matrix with one column or row).



2. Input:

From the user, take the number of rows and columns for both the matrix and the vector.

Take the respective elements for the matrix and the vector from the user.



3. Friend Function:

Use a friend function named multiple() to:

Multiply the matrix and vector (if compatible).

Display the result if multiplication is possible.

Otherwise, print an appropriate message like "Matrix vector multiplication not possible".




4. Output:

Display:

The original matrix.

The original vector.

The resulting product matrix/vector (if multiplication is valid).





Constraints:

Use arrays of size [50][50] for storage.

Use appropriate access specifiers and encapsulation principles.

Perform dimension compatibility check before multiplication:

For multiplication to be valid, the number of columns of the matrix must equal the number of rows of the vector.




---

Sample Input:

Enter number of row and column:
2 3
Enter array element:
1 2 3
4 5 6

Enter number of row and column:
3 1
Enter array element:
7
8
9

Sample Output:

Array element:
1   2   3
4   5   6

Vector elements are:
7
8
9

Multiplied value are:
50
122


---

Let me know if you'd like me to fix or rewrite the code as well — it currently has several bugs and inconsistencies (like undeclared variables and incorrect logic in the multiple() function).


*/
#include<iostream>
using namespace std;
class matrix;
class vector
{
 int b[50][50],r1,c1;
 public:
 vector()
 {
   cout <<"\nEnter number of row and column:"
   cin >> r2 >>c2;
   cout << "\nEnter array element:";
   for(i=0; i<r2; i++)
   {
    for(j=0; j<c2; j++)
    {
     cin>>a[i][j];
    }
   }
 }
 void displayv();
friend void multiple(matrix,vector);
};
class matrix
{
 int a[50][50],r1,c1;
 public:
matrix()
  {
   int i,j;
   cout << "\nEnter number of row and column:";
   cin >> r1 >>c1;
   cout << "\nEnter array element:";
   for(i=0; i<r1; i++)
   {
    for(j=0; j<c1; j++)
    {
     cin>>a[i][j];
    }
   }
  }
  void displaym();
  friend void multiple(matrix,vector);
};
void matrix :: displaym()
{
 int i,j;
 cout << "\nArray element:";
 for(i=0; i<r1; i++)
 {
  for(j=0; j<c1; j++)
  {
   cout << a[i][j] << "\t";
  }
  cout << "\n";
 }
}
void vector :: displayv()
{
 cout << "\nVector element are:";
for(i=0; i<r2; i++)
 {
  for(j=0; j<c2; j++)
  {
   cout << a[i][j] << "\t";
  }
  cout << "\n";
 }
}
void multiple(matrix m1,vector v1)
{
 int i,j,k,c[50][50],sum;
 if(r1==c2)
 {
 for(i=0; i<r1; i++)
 {
  sum=0;
  for(j=0; j<c2; j++)
  {
   for(k=0;k>c2;k++)
   {
   sum=sum+m1.a[i][k]*b[k][j];
   }
  }
  c[i][j]=sum;
  }
  cout << "\nMultiplied value are:\n"
  for(i=0; i<r2; i++)
 {
  for(j=0; j<c2; j++)
  {
   cout << a[i][j] << "\t";
  }
  cout << "\n";
 }
 }
 else
 cout << "Matrix vector multiplication cannot possible:";
}
int main()
{
    matrix m1;
    m1.displaym();
    vector v1;
    v1.displayv();
    multiple(m1,v1);
}
