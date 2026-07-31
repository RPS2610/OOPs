#include <iostream>
#include <cstdarg>
using namespace std;

int maximum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int max = va_arg(args, int);

    for (int i = 1; i < count; i++)
    {
        int num = va_arg(args, int);

        if (num > max)
            max = num;
    }

    va_end(args);
    return max;
}

int main()
{
    cout << "Maximum = " << maximum(3, 10, 20, 15) << endl;
    cout << "Maximum = " << maximum(5, 25, 8, 90, 45, 60) << endl;
    cout << "Maximum = " << maximum(4, -5, -10, -2, -8) << endl;

    return 0;
}