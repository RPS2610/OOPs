#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    Student() {
        id = 0;
        name = "";
        marks = 0;
    }

    void input() {
        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() const {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Marks: " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    cout << "\nEnter student details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        (students + i)->input();
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        (students + i)->display();
    }

    if (n > 0) {
        Student* ptr = &students[0];

        cout << "\nFirst student accessed using pointer:\n";
        ptr->display();
    }

    delete[] students;
    students = nullptr;

    return 0;
}