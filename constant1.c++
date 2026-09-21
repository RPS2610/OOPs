#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    const int salary;  

public:
    Employee(string n, int s) : name(n), salary(s) {
        cout << "Constructor called" << endl;
    }

    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    const Employee emp("Rudra", 50000);

    emp.display();

    return 0;
}