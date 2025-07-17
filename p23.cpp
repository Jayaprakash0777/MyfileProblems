/*
Here's a clear and complete question (problem statement) for the given C++ program:


---

✅ Problem Statement: Read and Print a 2x2 Matrix Using Default Arguments in C++

Write a C++ program to read and display a 2x2 matrix using functions with default arguments for the number of rows and columns.

Requirements:

1. Define a 2D array of size [100][100] in main().


2. Create two functions:

readMatrix(int arr[][100], int r = 2, int c = 2):

Accepts a 2D array and reads matrix elements from the user.

Uses default arguments for rows and columns (default is 2x2).


printMatrix(int arr[][100], int r = 2, int c = 2):

Accepts a 2D array and prints its elements in matrix format.

Also uses default arguments for dimensions.




3. In main(), call both functions without explicitly passing row and column values—i.e., rely on default parameters.



Constraints:

Use default arguments for function parameters.

Limit matrix size to a maximum of 100x100.

Only 2x2 matrices are handled by default unless specified.



---

🧾 Sample Input:

Enter the matrix elements:
1 2
3 4

📤 Sample Output:

The matrix elements are:
1 2
3 4


---

Let me know if you'd like this adapted for a variable-sized matrix (non-default values), or want the code formatted with improved best practices!


*/
#include <iostream>
using namespace std;

void readMatrix(int arr[][100], int r = 2, int c = 2);
void printMatrix(int arr[][100], int r = 2, int c = 2);

int main() {
    int arr[100][100];
    readMatrix(arr); // Using default arguments for dimensions
    printMatrix(arr); // Using default arguments for dimensions
  
    return 0;
}

void readMatrix(int arr[][100], int r, int c) {
    cout << "Enter the matrix elements:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
}

void printMatrix(int arr[][100], int r, int c) {
    cout << "The matrix elements are:" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
