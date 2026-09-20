#include <iostream>
using namespace std;

class Book {
private:
    int id;
    string title;

    static int count;

public:
    Book(int i, string t) {
        id = i;
        title = t;
        count++;
    }

    ~Book() {
        count--;
    }

    static int getCount() {
        return count;
    }

    void display() const {
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
    }

    void setTitle(const string& t) {
        title = t;
    }
};

int Book::count = 0;

int main() {
    Book b1(101, "C++ Programming");
    Book b2(102, "Data Structures");

    cout << "Active Books: " << Book::getCount() << endl;

    const Book b3(103, "OOP");

    cout << "\nConstant Object:" << endl;
    b3.display();

    // b3.setTitle("New Title");   // Error

    cout << "\nAfter creating b3: "
         << Book::getCount() << endl;

    return 0;
}