/*
Addition of Distances Using a Class
*/
#include <iostream>
using namespace std;
class DISTANCE {
private:
    int feet;
    float inches;

public:
    
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    
    void outputDistance() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    
    DISTANCE addDistance(DISTANCE d2) {
        DISTANCE sum;
        sum.feet = feet + d2.feet;
        sum.inches = inches + d2.inches;
        if (sum.inches >= 12.0) {
            sum.inches -= 12.0;
            sum.feet++;
        }
        return sum;
    }
};

int main() {
    DISTANCE d1, d2, sum;

    cout << "Enter the first distance:" << endl;
    d1.inputDistance();

    cout << "Enter the second distance:" << endl;
    d2.inputDistance();

    sum = d1.addDistance(d2);

    cout << "Sum of distances:" << endl;
    sum.outputDistance();

    return 0;
}
