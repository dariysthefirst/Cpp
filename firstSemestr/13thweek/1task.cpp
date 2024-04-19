#include <iostream>
using namespace std;

struct Date{
int hours;
int minutes;
};

int main() {
  Date time;
  Date timeAfter;
  int totalMin;
  int newHours;
  int newMin;

  cout << "enter time of the start: ";
  cin >> time.hours >> time.minutes;

  if(time.hours > 24 || time.minutes > 60){
    cout << "invalid input.";
    return 0;
  }
  cout << "enter how much time has passed since the start: ";
  cin >> timeAfter.minutes;

  totalMin = time.hours * 60 + time.minutes + timeAfter.minutes;
  newHours = (totalMin / 60) % 24;
  newMin = totalMin % 60;
  
  if(newMin < 10)
    cout << "the time is: " << newHours << ":0";
  else
    cout << "the time is: " << newHours << ":";
  cout << newMin;
}
