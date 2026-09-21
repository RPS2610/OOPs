#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    static int count;

public:
    Student(int r, string n) {
        roll = r;
        name = n;
        count++;
    }

    ~Student() {
        count--;
    }

    static void showCount() {
        cout << "Number of students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1(1, "Bruh");
    Student s2(2, "Rahul");
    Student s3(3, "Aman");

    Student::showCount();

    return 0;
}