//Write a C++ program to calculate Simple Interest using Function Overloading. Create overloaded functions named `calculate()` with different combinations of parameters to calculate and display Simple Interest.

#include <iostream>
using namespace std;

class Interest {
public:
    void calculate(int p, int r, int t) {
        cout << "Simple Interest: " << (p * r * t) / 100.0 << endl;
    }

    void calculate(float p, float r, int t) {
        cout << "Simple Interest: " << (p * r * t) / 100 << endl;
    }

    void calculate(int p, int r) {
        int t = 2;
        cout << "Simple Interest: " << (p * r * t) / 100.0 << endl;
    }
};

int main() {
    Interest obj;

    obj.calculate(10000, 5, 2);
    obj.calculate(15000.0f, 6.0f, 3);
    obj.calculate(20000, 8);

    return 0;
}
