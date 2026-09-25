#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
    }

    void showData() {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student *s = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        s[i].getData();
    }

    cout << "\n--- Student Details ---\n";

    for (int i = 0; i < n; i++) {
        s[i].showData();
    }

    delete[] s;

    return 0;
}