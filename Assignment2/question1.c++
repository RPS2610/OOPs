#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void setAge(int a);
};

void Person::setAge(int a) {
    if (a > 0)
        age = a;
}

class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m)
        : Person(n, a) {
        rollNo = r;
        marks = m;
    }

    void setMarks(float m);
    float getMarks() {
        return marks;
    }

    int getRollNo() {
        return rollNo;
    }
};

inline void Student::setMarks(float m) {
    if (m >= 0 && m <= 100)
        marks = m;
}

int main() {
    Student s("Rudra", 20, 101, 85);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    s.setMarks(90);

    cout << "Updated Marks: " << s.getMarks() << endl;

    return 0;
}