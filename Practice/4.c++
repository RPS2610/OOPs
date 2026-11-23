//Write a C++ program to demonstrate constructor overloading by creating a Student class with three constructors:
//1. Default constructor.
//2. Parameterized constructor with one parameter.
//3. Parameterized constructor with two parameters.


#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    Student() {
        roll = 0;
        name = "Unknown";
    }

    Student(int r) {
        roll = r;
        name = "Not Assigned";
    }

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << endl;
    }
};

int main() {
    Student s1;
    Student s2(101);
    Student s3(102, "Rudra");

    cout << "Default Constructor:" << endl;
    s1.display();

    cout << "One Parameter Constructor:" << endl;
    s2.display();

    cout << "Two Parameter Constructor:" << endl;
    s3.display();

    return 0;
}