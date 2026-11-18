#include <iostream>
using namespace std;

class Area {
    float side, radius;

public:
    void calculate(float s) {
        side = s;
        cout << "Area of Square = " << side * side << endl;
    }

    void calculate(double r) {
        radius = r;
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    Area operator+(Area a) {
        Area temp;
        temp.side = side + a.side;
        return temp;
    }
};

int main() {
    Area a1, a2, a3;

    float s;
    double r;

    cout << "Enter side of square: ";
    cin >> s;

    cout << "Enter radius of circle: ";
    cin >> r;

    a1.calculate(s);
    a2.calculate(r);

    return 0;
}