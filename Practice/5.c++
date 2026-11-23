// 1. WAP to overload the Unary Minus (-) operator using a member function to change the sign of the data member.

#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void operator-() {
        x = -x;
    }

    void display() {
        cout << "After unary minus: " << x;
    }
};

int main() {
    Number n;
    n.getData();

    -n;

    n.display();

    return 0;
}

