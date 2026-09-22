#include <iostream>
#include <string>
using namespace std;

class Computer
{
private:
    string brand;
    string model;

    // Nested class
    class Processor
    {
    private:
        string name;
        string speed;

    public:
        void inputProcessor()
        {
            cout << "Enter processor name: ";
            getline(cin, name);

            cout << "Enter processor speed: ";
            getline(cin, speed);
        }

        void displayProcessor()
        {
            cout << "Processor Name: " << name << endl;
            cout << "Processor Speed: " << speed << endl;
        }
    };

    Processor p;

public:
    void input()
    {
        cout << "Enter computer brand: ";
        getline(cin, brand);

        cout << "Enter computer model: ";
        getline(cin, model);

        p.inputProcessor();
    }

    void display()
    {
        cout << "\n--- Computer Details ---" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;

        cout << "\n--- Processor Information ---" << endl;
        p.displayProcessor();
    }
};

int main()
{
    Computer c;

    c.input();
    c.display();

    return 0;
}
