#include <iostream>
#include <memory>
using namespace std;
class Student {
private:
int id;
string name;
public:
Student(int i, string n) {
id = i;
name = n; }
void display() {
cout << "ID: " << id << ", Name: " << name << endl;
} };
int main() {
unique_ptr<Student> s1 = make_unique<Student>(101, "Rudra");
cout << "Using unique_ptr:" << endl;
s1->display();
shared_ptr<Student> s2 = make_shared<Student>(102, "Aman");
shared_ptr<Student> s3 = s2;
cout << "\nUsing shared_ptr:" << endl;
s2->display();
s3->display();
cout << "Reference Count: " << s2.use_count() << endl;
return 0; }
