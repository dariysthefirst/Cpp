#include <iostream>
#include <ctime>
using namespace std;
struct Date{
int year;
int month;
int day;
};
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
Date today(){
  time_t t = time(NULL);
  tm tl = *localtime(&t);
  Date today_date;
  today_date.year = tl.tm_year + 1900;
  today_date.month = tl.tm_mon + 1;
  today_date.day = tl.tm_mday;
  return today_date;
}
int daysCount(Date birthday){
  Date today_date = today();
  int days = 0;
  for(int year = birthday.year; year < today_date.year; year++){
    for(int month = 1; month <= 12; month++){
      days += monthLength(year, month);
    }
  }
  for(int month = 1; month < birthday.month; month++){
    days -= monthLength(birthday.year, month);
  }
  days -= birthday.day - 1;
  for(int month = 1; month < today_date.month; month++){
    days += monthLength(today_date.year, month);
  }
  days += today_date.day;
  return days;
}
int main(void) {
  Date birthdate;
  cout << "Enter your birthdate (yyyy mm dd): ";
  cin >> birthdate.year >> birthdate.month >> birthdate.day;
  cout << daysCount(birthdate) << " days have passed since your birthday";
}
