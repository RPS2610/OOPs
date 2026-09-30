// #include <iostream>
// #include <memory>
// using namespace std;
// class Node
// {
// public:
// int data;
// unique_ptr<Node> next;
// Node(int value)
// {data = value;
//  next = nullptr;}
// };
// int main()
// {
// unique_ptr<Node> head = make_unique<Node>(10);
// head->next = make_unique<Node>(20);
// head->next->next = make_unique<Node>(30);
// Node *temp = head.get();
// while (temp != nullptr)
// {cout << temp->data << " -> ";
// temp = temp->next.get();}
//     cout << "NULL";
//     return 0;
// }




// #include <iostream>
// using namespace std;
// class Student {
//     string name;
//     int age;
//     float marks;

// public:
//     void setDetails(string name, int age, float marks) {
//         this->name = name;
//         this->age = age;
//         this->marks = marks;}

//     void display() {
//         cout << "Name: " << this->name << endl;
//         cout << "Age: " << this->age << endl;
//         cout << "Marks: " << this->marks << endl;} };
// int main() {
//     Student *s1 = new Student();
//     s1->setDetails("Rudra", 20, 85.5);
//     s1->display();
//     delete s1;
//     return 0; }







// #include <iostream>
// using namespace std;
// class Student {
// public:
//     string name;
//     int age;
//     Student(string name, int age) {
//         this->name = name;
//         this->age = age; }
//     void display() {
//         cout << "Name: " << this->name << endl;
//         cout << "Age: " << this->age << endl;
//     } };
// int main() {
//     Student *s1 = new Student("Rudra", 20);
//     Student *s2 = s1;
//     s2->display();
//     delete s1;
//     return 0;
// }




