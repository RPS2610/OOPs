// #include<iostream>
// using namespace std;
//  int main ()
//  {
//     int x=10;
//     int &y=x;
//     cout<<"x= "<<x<<endl;
//     cout<<"y= "<<y<<endl;
//     y=25;
//     cout<<"x= "<<x<<endl;
//     cout<<"y= "<<y<<endl;
//     return 0;
//  }




// #include<iostream>
// using namespace std;
// int x=50;
//  int main ()
//  {
//   int x=10;
//   cout<<"Value of x= "<<x<<endl;
//   cout<<"Value of x= "<<::x<<endl;
//     return 0;
//  }





// #include <iostream>
// using namespace std;

// class xyz
// {
// private:
//     int x;
//     int y;

// public:
//     void get_data();
//     void display();
// };

// void xyz::get_data()
// {
//     cout << "Enter data: ";
//     cin >> x;
// }

// void xyz::display()
// {
//     cout << "Value = " << x << endl;
// }

// int main()
// {
//     xyz obj;

//     obj.get_data();
//     obj.display();

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class student
// {
//     int id;
//     float cgpa;
//     char name[20];
//     char dept[10];

// public:
//     void get_data();
//     void display_data();
// };

// void student::get_data()
// {
//     cout << "Enter Student ID: ";
//     cin >> id;

//     cout << "Enter Student Name: ";
//     cin >> name;

//     cout << "Enter Department: ";
//     cin >> dept;

//     cout << "Enter CGPA: ";
//     cin >> cgpa;
// }

// void student::display_data()
// {
//     cout << "Student ID : " << id << endl;
//     cout << "Student Name : " << name << endl;
//     cout << "Department : " << dept << endl;
//     cout << "CGPA : " << cgpa << endl;
// }

// int main()
// {
//     student s;

//     s.get_data();
//     s.display_data();

//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int salary;
//     char name[20];
//     char dept[10];

// public:
//     void get_data();
//     void display_data();
// };

// void Employee::get_data()
// {

//     cout << "Enter Employee ID: ";
//     cin >> id;

//     cout << "Enter Employee Name: ";
//     cin >> name;

//     cout << "Enter Employee Department: ";
//     cin >> dept;

//     cout << "Enter Monthly Salary: ";
//     cin >> salary;
// }

// void Employee::display_data()
// {
//     cout << "Annual Income " << salary * 12 << endl;
//     cout << "Salary after 10 percentage deduction as Tax " << salary * 10.8 << endl;
//     cout << "Salary after 5 percentage deduction in Other service " << salary * 10.26 << endl;
// }

// int main()
// {
//     Employee emp[5];

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter details of employee " << i + 1 << endl;
//         emp[i].get_data();
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << "\n Details of employee" << i + 1 << endl;
//         emp[i].display_data();
//     }

//     return 0;
// }






//  #include<iostream>
// using namespace std;
// namespace fruit
// {
//     void display()
//     {
//         cout<<"In Fruit display"<<endl;
//     }
//     void Qty_available()
//     {
//         cout<<"only 5 fruit available";
//     }
// }

// namespace Rice
// {
//     void display()
//     {
//         cout<<"rice namespace";
//     }
//     void Qty_available()
//     {
//         cout<<"No RIce Available";
//     }
// };





// #include <iostream>
// using namespace std;

// namespace fruit
// {
//     void display()
//     {
//         cout << "In Fruit display" << endl;
//     }

//     void Qty_available()
//     {
//         cout << "only 5 fruit available" << endl;
//     }
// }

// namespace Rice
// {
//     void display()
//     {
//         cout << "In rice namespace" << endl;
//     }

//     void Qty_available()
//     {
//         cout << "No Rice Available" << endl;
//     }
// }

// class Show
// {
// public:
//     void display()
//     {
//         fruit::Qty_available();
//         cout << "In class Show" << endl;
//         Rice::display();
//     }
// };

// int main()
// {
//     Show obj;
//     obj.display();

//     return 0;
// }






