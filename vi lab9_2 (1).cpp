#include<iostream>
using namespace std;

const int MAX_SIZE = 15;

class MATRIX {
protected:
    int m, n;
    int arr[MAX_SIZE][MAX_SIZE];
public:
    MATRIX() {
        cout << "\nEnter the size of the matrix:";
        cin >> m >> n;
    }

    void getMatrix() {
        cout << "\nEnter the matrix:";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
    }
};

class MAT : public MATRIX {
public:
    MATRIX operator*(const MATRIX &matrix) {
        MATRIX multi;
        if (n != matrix.m) {
            cout << "Invalid dimensions for matrix multiplication." << endl;
            return multi; // Returning empty matrix
        }
        multi.m = m;
        multi.n = matrix.n;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < matrix.n; j++) {
                multi.arr[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    multi.arr[i][j] += arr[i][k] * matrix.arr[k][j];
                }
            }
        }
        return multi;
    }

    void displayMatrix() {
        cout << "\nThe result matrix is:" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    MAT m1, m2;
    m1.getMatrix();
    m2.getMatrix();
    MAT multi = m1 * m2;
    multi.displayMatrix();
    return 0;
}