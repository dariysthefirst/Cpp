#include <iostream>
using namespace std;
bool isLeap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int monthLength(int year, int month){
  switch(month){
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
  return 31;
  case 4: case 6: case 9: case 11:
  return 30;
  case 2:
  return 28 + isLeap(year);
  }
  return month;
}
int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;
  for(int yr = year; yr < year + 1 ; yr++){
    cout << yr << " have: " << endl;
    for(int mo = 1; mo <= 12; mo++){
      cout << mo << " month - " << monthLength(yr, mo) << " days;" << endl;
    }
  }
}