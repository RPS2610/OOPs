#include<iostream>
using namespace std;

class Animal{
    public:
       virtual void sound(){
            cout << "Animal sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void sound() override {
            cout << "Woof!" << endl;
        }
};

int main(){

    Animal *animal = new Dog();
    animal->sound();
    Animal animal2;
    animal2.sound();
    return 0;
}