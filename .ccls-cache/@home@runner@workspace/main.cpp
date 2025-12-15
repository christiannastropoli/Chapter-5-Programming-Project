#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile;
    string nameFile;
    string nameTown;
    int population;
    int year = 1900;

    cout << "enter file name: ";
    cin >> nameFile;
    cout << "enter town name: ";
    cin.ignore();
    getline(cin, nameTown);

    inputFile.open(nameFile);
    if (!inputFile) {
        cout << "cannot access file.";
        return 0;
    }
    cout << "\n" << nameTown << " population over the years." << endl;
    cout << "each x 1000 people!" << endl;

    while (inputFile >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; i++) {
            cout << "x";
        }
        cout << endl;
        year += 20;
    }
    inputFile.close();
    return 0;
    }