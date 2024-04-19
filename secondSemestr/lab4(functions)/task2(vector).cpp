#include <iostream>
#include <vector>
using namespace std;
bool isLeap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int monthLength(int year, int month) {
  vector<int> mnLen = {
      31, 28 + isLeap(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  return mnLen[month - 1];
}
int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  for (int yr = year; yr < year + 1; yr++) {
    cout << yr << " have: " << endl;
    for (int mo = 1; mo <= 12; mo++) {
      cout << mo << " month - " << monthLength(yr, mo) << " days;" << endl;
    }
  }
}