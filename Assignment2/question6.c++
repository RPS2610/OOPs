#include <iostream>
using namespace std;

class Employee {
private:
    int id;

public:
    Employee() {
        id = 0;
        cout << "Constructor called" << endl;
    }

    Employee(int i) {
        id = i;
        cout << "Constructor called for Employee "
             << id << endl;
    }

    ~Employee() {
        cout << "Destructor called for Employee "
             << id << endl;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
    }
};

int main() {

    Employee* employees = new Employee[3];

    cout << "\nEmployees created successfully.\n";

    for (int i = 0; i < 3; i++) {
        employees[i].display();
    }

    delete[] employees;

    cout << "\nMemory released successfully." << endl;

    return 0;
}