// #include <iostream>
// using namespace std;

// void greet()
// {
//     cout << "Hello, User! Welcome!" << endl;
// }

// void greet(string name)
// {
//     cout << "Hello, " << name << "! Welcome!" << endl;
// }

// int main()
// {
//     string name;

//     cout << "Enter your name (or press Enter to skip): ";R
//     getline(cin, name);

//     if (name.empty())
//         greet();
//     else
//         greet(name);

//     return 0;
// }





#include <iostream>
using namespace std;

float calculateSalary(float basic, float hra = 500, float da = 150)
{
    return basic + (0.10 * hra) + (0.02 * da);
}

int main()
{
    float basic, hra, da;
    char choice;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Do you want to enter HRA and DA? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter HRA: ";
        cin >> hra;

        cout << "Enter DA: ";
        cin >> da;

        cout << "Total Salary = " << calculateSalary(basic, hra, da) << endl;
    }
    else
    {
        cout << "Total Salary = " << calculateSalary(basic) << endl;
    }

    return 0;
}