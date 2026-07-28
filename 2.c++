// #include <iostream>
// using namespace std;

// void calculate_two(int a, int b, int c)
// {
//     int sum;

//     if (a >= b && a >= c)
//         sum = b + c;
//     else if (b >= a && b >= c)
//         sum = a + c;
//     else
//         sum = a + b;

//     cout << "Sum of two smallest numbers = " << sum << endl;
// }

// void calculate_one()
// {
//     int a, b, c;

//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a % 2 == 0)
//         cout << a << " is Even" << endl;
//     else
//         cout << a << " is Odd" << endl;

//     if (b % 2 == 0)
//         cout << b << " is Even" << endl;
//     else
//         cout << b << " is Odd" << endl;

//     if (c % 2 == 0)
//         cout << c << " is Even" << endl;
//     else
//         cout << c << " is Odd" << endl;

//     calculate_two(a, b, c);
// }

// int main()
// {
//     calculate_one();
//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Area
// {
// public:
//     void calculateArea(int side)
//     {
//         cout << "Area of Square = " << side * side << endl;
//     }

//     void calculateArea(int length, int breadth)
//     {
//         cout << "Area of Rectangle = " << length * breadth << endl;
//     }

//     void calculateArea(float radius)
//     {
//         cout << "Area of Circle = " << 3.14 * radius * radius << endl;
//     }
// };

// int main()
// {
//     Area obj;

//     obj.calculateArea(5);
//     obj.calculateArea(8, 4);
//     obj.calculateArea(3.5f);

//     return 0;
// }






// #include <iostream>
// using namespace std;

// class Salary
// {
// public:
//     void calculateSalary(int basic)
//     {
//         int hra = 5000;
//         int da = 2000;
//         cout << "Total Salary = " << basic + hra + da << endl;
//     }

//     void calculateSalary(int basic, int hra, int da)
//     {
//         cout << "Total Salary = " << basic + hra + da << endl;
//     }
// };

// int main()
// {
//     Salary obj;

//     int basic, hra, da;

//     cout << "Enter Basic Salary: ";
//     cin >> basic;

//     obj.calculateSalary(basic);

//     cout << "\nEnter Basic Salary, HRA and DA: ";
//     cin >> basic >> hra >> da;

//     obj.calculateSalary(basic, hra, da);

//     return 0;
// }