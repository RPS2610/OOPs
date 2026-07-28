// #include <iostream>
// #include <cmath>
// using namespace std;

// namespace SimpleCalculator
// {
//     void addition(int a, int b)
//     {
//         cout << "Addition = " << a + b << endl;
//     }

//     void subtraction(int a, int b)
//     {
//         cout << "Subtraction = " << a - b << endl;
//     }

//     void multiplication(int a, int b)
//     {
//         cout << "Multiplication = " << a * b << endl;
//     }

//     void division(int a, int b)
//     {
//         if (b != 0)
//             cout << "Division = " << (float)a / b << endl;
//         else
//             cout << "Division not possible (Cannot divide by zero)" << endl;
//     }
// }

// namespace InterestCalculator
// {
//     void simpleInterest(float p, float r, float t)
//     {
//         float si = (p * r * t) / 100;
//         cout << "Simple Interest = " << si << endl;
//     }

//     void compoundInterest(float p, float r, float t)
//     {
//         float ci = p * pow((1 + r / 100), t) - p;
//         cout << "Compound Interest = " << ci << endl;
//     }
// }

// int main()
// {
//     int a, b;
//     float p, r, t;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     cout << "\n--- Simple Calculator ---" << endl;
//     SimpleCalculator::addition(a, b);
//     SimpleCalculator::subtraction(a, b);
//     SimpleCalculator::multiplication(a, b);
//     SimpleCalculator::division(a, b);

//     cout << "\nEnter Principal, Rate and Time: ";
//     cin >> p >> r >> t;

//     cout << "\n--- Interest Calculator ---" << endl;
//     InterestCalculator::simpleInterest(p, r, t);
//     InterestCalculator::compoundInterest(p, r, t);

//     return 0;
// }








// #include <iostream>
// using namespace std;

// class Area
// {
// public:
//     void area(int side)
//     {
//         cout << "Area of Square = " << side * side << endl;
//     }

//     void area(int length, int breadth)
//     {
//         cout << "Area of Rectangle = " << length * breadth << endl;
//     }

//     void area(float radius)
//     {
//         cout << "Area of Circle = " << 3.14 * radius * radius << endl;
//     }

//     void area(float base, float height)
//     {
//         cout << "Area of Triangle = " << 0.5 * base * height << endl;
//     }
// };

// int main()
// {
//     Area a;
//     int choice;
//     char ch;

//     do
//     {
//         cout << "\n----- Area Calculator -----" << endl;
//         cout << "1. Square" << endl;
//         cout << "2. Rectangle" << endl;
//         cout << "3. Circle" << endl;
//         cout << "4. Triangle" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//         {
//             int side;
//             cout << "Enter side: ";
//             cin >> side;
//             a.area(side);
//             break;
//         }

//         case 2:
//         {
//             int length, breadth;
//             cout << "Enter length and breadth: ";
//             cin >> length >> breadth;
//             a.area(length, breadth);
//             break;
//         }

//         case 3:
//         {
//             float radius;
//             cout << "Enter radius: ";
//             cin >> radius;
//             a.area(radius);
//             break;
//         }

//         case 4:
//         {
//             float base, height;
//             cout << "Enter base and height: ";
//             cin >> base >> height;
//             a.area(base, height);
//             break;
//         }

//         default:
//             cout << "Invalid Choice!" << endl;
//         }

//         cout << "\nDo you want to calculate another area? (y/n): ";
//         cin >> ch;

//     } while (ch == 'y' || ch == 'Y');

//     return 0;
// }




// #include <iostream>
// using namespace std;

// int evaluate(int a, int b, int c)
// {
//     return a + (b * b) + (2 * c);
// }

// int evaluate(int b, int c)
// {
//     int a = 5;
//     return a + (b * b) + (2 * c);
// }

// int main()
// {
//     int a, b, c;

//     cout << "Enter values of a, b and c: ";
//     cin >> a >> b >> c;
//     cout << "Result = " << evaluate(a, b, c) << endl;

//     cout << "\nEnter values of b and c (a = 5): ";
//     cin >> b >> c;
//     cout << "Result = " << evaluate(b, c) << endl;

//     return 0;
// }