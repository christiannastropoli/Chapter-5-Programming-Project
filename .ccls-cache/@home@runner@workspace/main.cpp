#include <iostream>
using namespace std;

int main () {
  int days;
  double population;
  double percent;
  double daysIncrease;

  cout << "enter the base population: ";
  cin >> population;
  while (population < 2) {
    cout << "please enter a number greater than 2: ";
    cin >> population;
  }
  cout << "enter the daily incoming population: ";
  cin >> percent;
  while (percent < 0) {
    cout << "please enter a positive number: ";
    cin >> percent;
  }
  cout << "enter the number of days: ";
  cin >> days;
  while (days < 1) {
    cout << "please enter a number greater than 1: ";
    cin >> days;
  }
  daysIncrease = percent / 100.0;
  cout << "\nday\tpopulation\n";
  cout << "-----------------\n";
  for (int day = 1; day <= days; day++) {
    cout << day << "\t" << population << endl;
    population = population + population + (population * daysIncrease);
  }
  return 0;
}