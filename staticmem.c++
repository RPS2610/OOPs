#include <iostream>
using namespace std;
class ClassA {
private:
int a;
static int count;
public:
ClassA(int x) {
a = x;
count++; }
friend void showData(ClassA);};
int ClassA::count = 0;
void showData(ClassA obj) {
cout << "Data of Class A: " << obj.a << endl;
cout << "Number of objects: " << ClassA::count << endl;}
int main() {
ClassA obj1(10);
ClassA obj2(20);
showData(obj1);
showData(obj2);
return 0; }
