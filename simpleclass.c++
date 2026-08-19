// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "age:" <<age << endl;
//     }
// };
// int main()
// {
//     Student s1;

//     s1.name = "Rudra";
//     s1.age = 20;

//    s1.display();
//    return 0;
// }




// #include <iostream>
// using namespace std;

// class Car
// {
// private:
//     string Brand;
//     int Year;

// public:

//     void input()
//     {
//      cout<<"Enter Brand Name: ";
//      cin>>Brand;

//      cout<<"Enter Year: ";
//      cin>>Year;
//     }
//     void display()
//     {
//         cout<<"     Car Details     "<<endl;
//         cout << "Brand: " << Brand << endl;
//         cout << "Year:" <<Year << endl;
//     }
// };
// int main()
// {
//     Car s1;

//    s1.input();
//    s1.display();
//    return 0;
// }




#include<iostream>
using namespace std;

class calculator{

private:
int a,b;

public:
void input()
{
    cout<<"Enter Number a and b: ";
    cin>>a;
    cin>>b;
}

void display()
{
    cout<< a+b<<endl;
    cout<< a*b<<endl;
}
};

int main()
{
calculator c;

c.input();
c.display();

return 0;
}
