#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int a;

public:
    ClassA(int x) {
        a = x;
    }

    friend void showData(ClassA, ClassB);
};

class ClassB {
private:
    int b;

public:
    ClassB(int y) {
        b = y;
    }

    friend void showData(ClassA, ClassB);
};

void showData(ClassA objA, ClassB objB) {
    cout << "Data of Class A: " << objA.a << endl;
    cout << "Data of Class B: " << objB.b << endl;
    cout << "Sum of shared data: " << objA.a + objB.b << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    showData(objA, objB);

    return 0;
}