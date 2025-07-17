#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

class RationalNumber {
private:
    int numerator;
    int denominator;
    
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    
public:
    RationalNumber(int num, int den) {
        if (den == 0) {
            throw invalid_argument("Denominator cannot be zero");
        }
        
        // Ensure negative sign is only in numerator
        if (den < 0) {
            num *= -1;
            den *= -1;
        }
        
        // Reduce fraction
        int common_divisor = gcd(abs(num), den);
        numerator = num / common_divisor;
        denominator = den / common_divisor;
    }
    
    RationalNumber operator+(const RationalNumber& other) {
        int new_numerator = numerator * other.denominator + other.numerator * denominator;
        int new_denominator = denominator * other.denominator;
        return RationalNumber(new_numerator, new_denominator);
    }
    
    RationalNumber operator-(const RationalNumber& other) {
        int new_numerator = numerator * other.denominator - other.numerator * denominator;
        int new_denominator = denominator * other.denominator;
        return RationalNumber(new_numerator, new_denominator);
    }
    
    RationalNumber operator*(const RationalNumber& other) {
        int new_numerator = numerator * other.numerator;
        int new_denominator = denominator * other.denominator;
        return RationalNumber(new_numerator, new_denominator);
    }
    
    RationalNumber operator/(const RationalNumber& other) {
        if (other.numerator == 0) {
            throw invalid_argument("Cannot divide by zero");
        }
        int new_numerator = numerator * other.denominator;
        int new_denominator = denominator * other.numerator;
        return RationalNumber(new_numerator, new_denominator);
    }
    
    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    try {
        RationalNumber r1(3, 6);  // Automatically reduces to 1/2
        RationalNumber r2(1, -3);  // Automatically converts to -1/3
        (r1 + r2).display();  // Output: 1/6
        cout << endl;
        (r1 - r2).display();  // Output: 5/6
        cout << endl;
        (r1 * r2).display();  // Output: -1/6
        cout << endl;
        (r1 / r2).display();  // Output: -3/2
        cout << endl;
    } catch(const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}