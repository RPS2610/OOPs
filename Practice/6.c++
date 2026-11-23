// 2. WAP to overload the Pre-increment (++) operator using a member function to increase the value of an object by 1.

#include <iostream>
using namespace std;

class Number {
    int x;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> x;
    }

    void operator++() {
        ++x;
    }

    void display() {
        cout << "After pre-increment: " << x;
    }
};

int main() {
    Number n;
    n.getData();

    ++n;

    n.display();

    return 0;
}