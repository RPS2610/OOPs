// #include<iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node* next;
// };

// int main()
// {
//     Node n1, n2;

//     n1.data = 10;
//     n1.next = &n2;

//     n2.data = 20;
//     n2.next = NULL;

//     cout << n1.data << " ";
//     cout << n1.next->data;

//     return 0;
// }





// #include<iostream>
// using namespace std;

// class Employee
// {
// public:
//     int id;
//     string name;
//     Employee* next;

//     Employee(int i, string n)
//     {
//         id = i;
//         name = n;
//         next = NULL;
//     }
// };

// int main()
// {
//     Employee e1(101, "Rudra");
//     Employee e2(102, "Rahul");
//     Employee e3(103, "Aman");

//     e1.next = &e2;
//     e2.next = &e3;

//     Employee* temp = &e1;

//     while(temp != NULL)
//     {
//         cout << "ID: " << temp->id << endl;
//         cout << "Name: " << temp->name << endl;
//         temp = temp->next;
//     }

//     return 0;
// }






// #include<iostream>
// using namespace std;

// class Student
// {
// public:
//     int rollno;
//     Student *next;
// };

// int main()
// {
//     Student s1, s2, s3;

//     s1.rollno = 101;
//     s2.rollno = 102;
//     s3.rollno = 103;

//     s1.next = &s2;
//     s2.next = &s3;
//     s3.next = NULL;

//     Student *ptr = &s1;

//     while(ptr != NULL)
//     {
//         cout << "Roll No: " << ptr->rollno << endl;
//         ptr = ptr->next;
//     }

//     return 0;
// }







// #include<iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// int main()
// {
//     Node *head, *temp, *newNode;

//     Node n1, n2;

//     n1.data = 10;
//     n2.data = 20;

//     n1.next = &n2;
//     n2.next = NULL;

//     head = &n1;

//     newNode = new Node;
//     newNode->data = 30;
//     newNode->next = NULL;

//     temp = head;

//     while(temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;

//     temp = head;

//     while(temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }