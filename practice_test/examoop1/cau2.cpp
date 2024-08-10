#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imaginary;
public:
    // Default constructor
    Complex() : real(0.0), imaginary(0.0) {}

    // Constructor with parameters
    Complex(float realPart, float imagPart) : real(realPart), imaginary(imagPart) {}
    
    // Copy constructor
    Complex(const Complex& other) {
        real=other.real;
        imaginary=other.imaginary;
    }
    // Overloaded plus operator (+)
    Complex operator+(const Complex& other) const {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Overloaded comparison operator (==)
    bool operator==(const Complex& other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    // Overloaded assignment operator (=)
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imaginary = other.imaginary;
        }
        return *this;
    }

    void display() const {
        cout << real << " + " << imaginary ;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3;

    c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();
    cout << endl;


    if (c1 == c2)
        cout << "c1 and c2 are equal." << endl;
    else
        cout << "c1 and c2 are not equal." << endl;

    // Assignment
    Complex c4 = c1;
    cout << "Copied complex number: ";
    c4.display();
    cout << endl;

    return 0;
}
