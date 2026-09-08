//write c++ program to create a student class with
 //data member marks use copy contructor , copy the 
 //marks of one student into another object.

//  #include <iostream>
// using namespace std;

// class Student {
// private:
//     int marks;

// public:
//     // Parameterized constructor
//     Student(int m) {
//         marks = m;
//     }

//     // Copy constructor
//     Student(const Student &s) {
//         marks = s.marks;
//     }

//     // Function to display marks
//     void display() {
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     // First student object
//     Student student1(85);

//     // Copy student1's marks into student2
//     Student student2 = student1;

//     cout << "Student 1: ";
//     student1.display();

//     cout << "Student 2: ";
//     student2.display();

//     return 0;
// }




//create class employee having id and salary. Initializer the first object using a parameter constructor and create a second object using a copy constructor.


// #include <iostream>
// using namespace std;

// class Employee {
// private:
//     int id;
//     float salary;

// public:
//     // Parameterized constructor
//     Employee(int i, float s) {
//         id = i;
//         salary = s;
//     }

//     // Copy constructor
//     Employee(const Employee &e) {
//         id = e.id;
//         salary = e.salary;
//     }

//     // Display function
//     void display() {
//         cout << "Employee ID: " << id << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// int main() {
//     // First object using parameterized constructor
//     Employee emp1(101, 50000);

//     // Second object using copy constructor
//     Employee emp2(emp1);

//     cout << "First Employee:" << endl;
//     emp1.display();

//     cout << "\nSecond Employee:" << endl;
//     emp2.display();

//     return 0;
// }