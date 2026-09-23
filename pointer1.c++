#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int *ptr = &num;

    cout << "Value of integer: " << *ptr << endl;

    return 0;
}