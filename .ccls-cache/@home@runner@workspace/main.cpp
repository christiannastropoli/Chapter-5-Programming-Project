#include <iostream>

using namespace std;

int main () {
    cout << "pattern one!" << endl;

    for (int row = 1; row <= 10; row++) {
        for (int col = 1; col <= row; col++) {
            cout << "x";
        }
        cout << endl;
    }
    cout << endl;

    cout << "pattern two!" << endl;
    for (int row = 10; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "x";
        }
        cout << endl;
    }
    return 0;
}