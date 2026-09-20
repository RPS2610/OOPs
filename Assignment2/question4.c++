#include <iostream>
using namespace std;

class Matrix {
private:
    int a[2][2];

public:
    Matrix() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                a[i][j] = 0;
            }
        }
    }

    Matrix(int x, int y, int z, int w) {
        a[0][0] = x;
        a[0][1] = y;
        a[1][0] = z;
        a[1][1] = w;
    }

    Matrix& add(const Matrix& m) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                this->a[i][j] += m.a[i][j];
            }
        }

        return *this;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);
    Matrix m3(1, 1, 1, 1);

    m1.add(m2).add(m3);

    cout << "Result:" << endl;
    m1.display();

    return 0;
}