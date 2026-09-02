#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks = {85, 78, 92, 67, 88};

    int total = 0;

    cout << "Student Marks:" << endl;

    for (auto mark : marks) {
        cout << mark << " ";
        total += mark;
    }

    double average = (double)total / marks.size();

    cout << "\n\nTotal Marks = " << total;
    cout << "\nAverage Marks = " << average << endl;

    return 0;
}