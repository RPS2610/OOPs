#include<iostream>
using namespace std;
class Worker {
 int wages;
 public:
 void Setwages(int wages)
 {
    this->wages=wages;
 }
 void display()
 {
    cout<<"Wages : "<<wages;
 }
};

int main()
{
    Worker S1;
    S1.Setwages(2500);
    S1.display();
    return 0;
}