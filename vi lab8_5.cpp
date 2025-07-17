#include <iostream>
#include <cstring> 
using namespace std;

class STRING {
private:
    char arr[50];
public:
    STRING() {
        cout << "\nEnter a string:";
        cin.getline(arr, 50);
    } 
    
    
    bool operator==(const STRING &s) {
        
        int r = strcmp(this->arr, s.arr);
        return (r == 0);
    }
};

int main() {
    STRING s1, s2;
    if (s1 == s2) {
        cout << "\nstring1 is equal to string2";
    } else {
        cout << "\nstring1 is not equal to string2";
    }
  
    return 0;
}