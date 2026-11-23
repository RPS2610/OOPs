// WAP in C++ to overload the binary (+) operator using a member function to add two complex numbers.

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void getData() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Sum = " << real << " + " << imag << "i";
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "Enter second complex number:\n";
    c2.getData();

    c3 = c1 + c2;

    c3.display();

    return 0;
}