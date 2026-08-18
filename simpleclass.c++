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




#include <iostream>
using namespace std;

class Car
{
public:
    string Brand;
    int Year;

    void display()
    {
        cout << "Brand: " << Brand << endl;
        cout << "Year:" <<Year << endl;
    }
};
int main()
{
    Car s1;

    s1.Brand = "BMW";
    s1.Year = 2;

   s1.display();
   return 0;
}
