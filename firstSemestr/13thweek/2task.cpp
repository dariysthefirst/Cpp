#include <iostream>
using namespace std;

struct Date{
int hours;
int minutes;
};

int main() {
  Date time;
  Date timeAfter;
  int hoursDiff;
  int minutesDiff;
  
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
  hoursDiff = timeAfter.hours - time.hours;
  minutesDiff = timeAfter.minutes - time.minutes;
  
  if(minutesDiff < 0){
    --hoursDiff;
    minutesDiff += 60;
  }
  if(hoursDiff < 0){
    hoursDiff += 24;
  }
  
  cout << "you`ve been working for " << hoursDiff <<" hours and " << minutesDiff << " minutes";
}
