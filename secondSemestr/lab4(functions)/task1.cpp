#include <iostream>
using namespace std;
bool isLeap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int main() {
  int year1;
  int year2;
  cout << "Enter a starting year: ";
  cin >> year1;
  cout << "Enter an ending year: ";
  cin >> year2;
  for (int year = year1; year <= year2; year++) {
    if (isLeap(year)) {
      cout << year << " is a leap year" << endl;
    } else {
      cout << year << " is not a leap year" << endl;
    }
  }
}