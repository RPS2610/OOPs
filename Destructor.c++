// #include<iostream>
// using namespace std;

// class BankAccount {
//     double balance;
//     public:
//     //constructor
//     BankAccount()
//     {
//         balance =2000;
//         cout<<"Account created"<<endl;
//     }
//     void display(){
//         cout<<"Balance: Rs "<<balance<<endl;
//     }
//     //Destructor
//     ~BankAccount()
//     {
//         cout<<"Account object destroyed"<<endl;
//     }
// };

// int main()
// {
//     BankAccount account;
//     account.display();

//     return 0;
// }





//Write a C++ program to craete a CAr class. Use a contructor to intialize the cars model and price and a destructor to display a messsage when the object is destroyed.


#include <iostream>
using namespace std;

class Car
{
    string model;
    float price;

public:
    // Constructor
    Car(string m, float p)
    {
        model = m;
        price = p;
        cout << "Car Created!" << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;
    }

    // Destructor
    ~Car()
    {
        cout << "Car object is destroyed." << endl;
    }
};

int main()
{
    Car c1("Toyota", 15000);

    return 0;
}