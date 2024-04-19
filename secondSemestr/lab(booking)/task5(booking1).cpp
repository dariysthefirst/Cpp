#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class flight_booking{
  private:
  int id;
  int capacity;
  int reserved; 
  double percentage;
public:
flight_booking(int id, int capacity, int reserved){
  this->id = id;
  this->capacity = capacity;
  this->reserved = reserved;
}
void print_status(){
  percentage = (static_cast<double>(reserved)/capacity) * 100.0;
  cout << "Flight " << id << ": " << reserved << "/" << capacity << " (" << fixed << setprecision(2) << percentage << "%) is reserved" << endl;
}
};
int main(){
  int reserved = 0;
  int capacity = 0;
  cout << "Enter flight capacity: ";
  cin >> capacity;
  cout << endl << "Enter number of reserved seats: ";
  cin >> reserved;
  cout << endl;
  flight_booking booking_1(1, capacity, reserved);
  booking_1.print_status();
}