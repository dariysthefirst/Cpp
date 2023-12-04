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
  cout << "enter how much time has passed since the start: ";
  cin >> timeAfter.minutes;

  time.minutes += timeAfter.minutes;
  if(time.minutes > 60){
    time.hours += 1;
    time.minutes -= 60;
  }
  cout << "the time is: " << time.hours << ":" << time.minutes;
}