#include <iostream>
using namespace std;

class Area {
private:
    float length;
    float breadth;

public:
    void input() {
        cout << "Enter Length of Reactangle: ";
        cin >> length;

        cout << "Enter Breadth of Reactangle: ";
        cin >> breadth;
    }

    void display() {
        cout << " Area Of Reactangle :- " << length*breadth << endl;
        
    }
};

int main() {
    Area R;
    R.input();
    R.display();

    return 0;
}