#include<iostream>
using namespace std;
class Vector;
class Matrix
{ int mat[10][10],m1,n1;
  public:
  Matrix()
  { cout << "\nEnter rows and columns of Matrix:" << endl;
    cin>>m1>>n1;
  }
  void getMatrix()
  { cout<<"\nEnter the matrix elements:";
    for(int i=0;i<m1;i++)
     { for(int j=0;j<n1;j++)
        { cin>>mat[i][j];
        }
     }   
  }
  void displayMatrix()
  { cout<<"\nThe matrix elements are:\n";
    for(int i=0;i<m1;i++)
     { for(int j=0;j<n1;j++)
        { cout<<" "<<mat[i][j];
        } cout<<"\n";
     }   
  }
  friend class Vector;
};  
class Vector 
{ int vect[10][10],m2,n2;
  public:
  int mult[15][15];
  Vector()
  { cout << "\nEnter rows and columns of Vector:" << endl;
    cin>>m2>>n2;
  }
  void getVector()
  { cout<<"\nEnter the vector elements:";
    for(int i=0;i<m2;i++)
     { for(int j=0;j<n2;j++)
        { cin>>vect[i][j];
        }
     }   
  }
  void displayVector()
  { cout<<"\nThe vector elements are:\n";
    for(int i=0;i<m2;i++)
     { for(int j=0;j<n2;j++)
        { cout<<" "<<vect[i][j];
        } cout<<"\n";
     }   
  }
  void multipliedMatrix(Matrix m)
  { for(int i=0;i<m.m1;i++)
     { for(int j=0;j<n2;j++)
        { mult[i][j]=0;
          for(int k=0;k<m.n1;k++)
            { mult[i][j]+=m.mat[i][k]*vect[k][j];
            }
        }
     }
  }
  void displayMultiMatrix()
  {  cout<<"\nThe multiplied matrix is:\n";
    for(int i=0;i<m2;i++)
     { for(int j=0;j<n2;j++)
        { cout<<" "<<mult[i][j]; 
        } cout<<"\n";
     }
  }      
};  
int main()
{ Matrix m;
  m.getMatrix();
  m.displayMatrix();
  Vector v;
  v.getVector();
  v.displayVector();
  v.multipliedMatrix(m);
  v.displayMultiMatrix();
  
  return 0;
 }  