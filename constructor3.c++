//Write a C++ program to create a class Multiply and use a parameterized constructor to multiply two numbers.


// #include <iostream>
// using namespace std;

// class Multiply {
//     int a, b;

// public:
//     Multiply(int x, int y) {
//         a = x;
//         b = y;
//     }

//     void result() {
//         cout << "Multiplication = " << a * b << endl;
//     }
// };

// int main()
// {
//     int x,y;
//  cout<<"Enter value of a : ";
//  cin>>x;

//  cout<<"Enter value of b : ";
//  cin>>y;
//     Multiply m(x,y);
//     m.result();
//     return 0;
// }










//Write a C++ program to create a class Rectangle and use a parameterized constructor to calculate the area of a rectangle.


// #include <iostream>
// using namespace std;

// class Reactangle {
//     int l, b;

// public:
//    Reactangle(int x, int y) {
//         l = x;
//         b = y;
//     }

//     void result() {
//         cout << "Area of Reactangle = " << l * b << endl;
//     }
// };

// int main()
// {
//     int x,y;
//  cout<<"Enter value of length : ";
//  cin>>x;

//  cout<<"Enter value of breadth : ";
//  cin>>y;
//     Reactangle m(x,y);
//     m.result();
//     return 0;
// }







// Develop a C++ program to demonstrate different types of constructors and their behavior in object life-cycle management.



#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    // 1. Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

};

int main() {
    cout << "Creating object using Default Constructor:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object using Parameterized Constructor:" << endl;
    Student s2(101, "Rudra");
    s2.display();

    cout << "\nCreating object using Copy Constructor:" << endl;
    Student s3(s2);
    s3.display();

    return 0;
}