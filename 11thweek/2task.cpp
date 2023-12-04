#include <iostream>
using namespace std;

struct Date{
int hours;
int minutes;
};

int main() {
  Date time;
  Date timeAfter;
  cout << "enter time of the start: ";
  cin >> time.hours >> time.minutes;
  if(time.hours > 24 || time.minutes > 60){
    cout << "invalid input.";
    return 0;
  }
  cout << "enter time of the end: ";
  cin >> timeAfter.hours >> timeAfter.minutes;
  if(timeAfter.hours > 24 || timeAfter.minutes > 60){
    cout << "invalid input.";
    return 0;
  }
  int hoursDiff = timeAfter.hours - time.hours;
  int minutesDiff = timeAfter.minutes - time.minutes;
  cout << "you`ve been working for " << hoursDiff <<" hours and " << minutesDiff << " minutes";
}