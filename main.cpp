#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile;
    string name;
    string smallest;
    string largest;
    int count = 0;

    inputFile.open("LineUp.txt");

    if (!inputFile) {
        cout << "cannot access file." << endl;
        return 0;
    }

    
    inputFile >> name;
    
    smallest = name;
    largest = name;
    
    count = 1;

    while (inputFile >> name) {
        count++;

        if (name < smallest) {
            smallest = name;
        }

        if (name > largest) {
            largest = name;
        }
    }

    inputFile.close();

    cout << "# of students: " << count << endl;
    cout << "student at the front of the line: " << smallest << endl;
    cout << "student at the end of the line: " << largest << endl;

    return 0;
}