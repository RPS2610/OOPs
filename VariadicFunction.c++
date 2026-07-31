#include <iostream>
#include <cstdarg>
using namespace std;

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int total = 0;

    for (int i = 0; i < count; i++)
    {
        total += va_arg(args, int);
    }

    va_end(args);
    return total;
}

int main()
{
    cout << "Sum = " << sum(3, 10, 20, 30) << endl;
    cout << "Sum = " << sum(5, 5, 10, 15, 20, 25) << endl;
    cout << "Sum = " << sum(2, 100, 200) << endl;

    return 0;
}