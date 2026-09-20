#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char* name;
    int id;

public:
    // Default constructor
    Employee() {
        name = new char[20];
        strcpy(name, "Unknown");
        id = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Employee(const char* n, int i) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        id = i;
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    Employee(const Employee& e) {
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);
        id = e.id;
        cout << "Copy Constructor" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }

    // Destructor
    ~Employee() {
        delete[] name;
        cout << "Destructor" << endl;
    }
};

int main() {
    Employee e1;

    Employee e2("Rudra", 101);

    Employee e3 = e2;

    cout << "\nEmployee 1:" << endl;
    e1.display();

    cout << "\nEmployee 2:" << endl;
    e2.display();

    cout << "\nEmployee 3:" << endl;
    e3.display();

    return 0;
}