//same object, same function but acts differently based on different environments.

//polymorphism in oops means many forms- the ability of one function, operator or object to behave differently in different 
//environments. it is one of the core concepts of oops. it allows us to perform a single action in different ways. it is achieved 
//by using function overloading, operator overloading and virtual functions.
// based on context.

//Types-
//compile time polymorphism- function overloading and operator overloading (static)
//1. resolved by the compiler before the program runs
//2. achieved by function overloading and operator overloading
//3. static polymorphism is faster- no runtime lookup overhead
//4. it is also called as ad-hoc polymorphism.
 
//run time polymorphism- achieved by using virtual function (dynamic)
//1. resolved during runtime- resolved while the program is executing
//2. achieved by using virtual function and inheritance.
//3. slight overhead- v-table lookup per call
//4. enables a base pointer to call derived behaviour- allows for more flexible and extensible code

//compile time in action- two or more funuctions share a name, the compiler picks the right one by matching the argumnet list
//at the compile time.
//eg- 



// class calculator{
//     public:
//     int add(int a, int b){
//         return a+b;
//     }
//     double add(double a, double b){
//         return a+b;
//     }
//     int add(int a, int b, int c){
//         return a+b+c;
//     }
// };



// Function Overloading -  Function overoading means defining multiple function with same name , with different parameter
// (type or number)

// class print
// {
//     void display(int x)
//     {
//         cout<<x;
//     }
//     void display(double y)
//     {
//         cout<<y;
//     }
//     int main()
//     {
//         print obj;
//         obj.display(10);
//         obj.display(12.5);
//     }
// }






//Write a C++ Program calculate the Area of the Square , Reactangle and circle using Function overloading 



// #include <iostream>
// using namespace std;

// class Area
// {
// public:
//     int calculate(int s)
//     {
//         return s * s;
//     }

//     int calculate(int l, int b)
//     {
//         return l * b;
//     }

//     float calculate(float r)
//     {
//         return 3.14 * r * r;
//     }
// };

// int main()
// {
//     Area obj;
//     int s, l, b;
//     float r;

//     cout << "Enter side of square: ";
//     cin >> s;
//     cout << "Area of Square = " << obj.calculate(s) << endl;

//     cout << "Enter length and breadth of rectangle: ";
//     cin >> l >> b;
//     cout << "Area of Rectangle = " << obj.calculate(l, b) << endl;

//     cout << "Enter radius of circle: ";
//     cin >> r;
//     cout << "Area of Circle = " << obj.calculate(r) << endl;

//     return 0;
// }





//WAP to calculate simple intrest using Funtion overloading. create overlloaded function that accept different parameter combination.


// #include <iostream>
// using namespace std;

// class Interest
// {
// public:
//     float calculate(float p, float r, float t)
//     {
//         return (p * r * t) / 100;
//     }

//     float calculate(float p, float r)
//     {
//         return (p * r) / 100;
//     }
// };

// int main()
// {
//     Interest obj;
//     float p, r, t;

//     cout << "Enter Principal Amount: ";
//     cin >> p;

//     cout << "Enter Rate of Interest: ";
//     cin >> r;

//     cout << "Enter Time: ";
//     cin >> t;

//     cout << "Simple Interest = " << obj.calculate(p, r, t);

//     return 0;
// }



