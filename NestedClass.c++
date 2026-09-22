#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    // Nested class
    class Details
    {
    public:
        string name;
        string address;

        void input()
        {
            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter student address: ";
            getline(cin, address);
        }

        void display()
        {
            cout << "\nStudent Name: " << name << endl;
            cout << "Student Address: " << address << endl;
        }
    };

    Details student;
};

int main()
{
    Student s;

    s.student.input();
    s.student.display();

    return 0;
}