//Write a C++ program to demonstrate function overriding using inheritance. Create a base class Employee and a derived class Manager. Override the display() function to display their respective details

#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;

    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

class Manager : public Employee {
public:
    string department;
    int salary;

    void display() {
        cout << "Manager Name: " << name << endl;
        cout << "Manager ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.name = "Rohan";
    e.id = 101;

    Manager m;
    m.name = "Rahul";
    m.id = 102;
    m.department = "IT";
    m.salary = 50000;

    cout << "Employee Details:" << endl;
    e.display();

    cout << "\nManager Details:" << endl;
    m.display();

    return 0;
}