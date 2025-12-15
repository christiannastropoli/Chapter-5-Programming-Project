#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    int randoNumber;
    int guess;
    int tries = 0;

    srand(time(0));
    randoNumber = rand() % 100 + 1;
    cout << "guess a number between 1 and 100: ";
    cin >> guess;
    tries++;

    while (guess != randoNumber) {
        if (guess > randoNumber) {
            cout << " too high! try again: ";
            cin >> guess;
        }
        else {
            cout << " too low! try again: ";
            cin >> guess;
        }
        cout << "what's your guess? ";
        cin >> guess;
        tries++;
    }
    cout << "you got it! it took " << tries << endl;
    return 0;
}