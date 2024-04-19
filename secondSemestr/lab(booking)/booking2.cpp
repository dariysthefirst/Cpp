#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class flight_booking {
private:
  int id;
  int capacity;
  int reserved;
  double percentage;
void upd_percentage(){
  percentage = static_cast<double>(reserved) / capacity * 100.0;
}

public:
  flight_booking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;
    if (reserved <= capacity) {
      this->reserved = reserved;
    } else {
      this->reserved = 0;
    }
  }
  void print_status() {
    upd_percentage();
    cout << "Flight " << id << ": " << reserved << "/" << capacity << " ("
         << fixed << setprecision(2) << percentage << "%) is reserved" << endl;
  }
  bool add_reserved(int n) {
    if (n >= 0) {
      reserved += n;
      upd_percentage();
      if(percentage <= 105.0){
        return true;
      }
  }
    return false;
  }
  bool cancel_reserved(int n) {
    if (n <= capacity) {
      reserved -= n;
      if(reserved >= 0){
      return true;
      } else {
        reserved += n;
        return false;
      }
    }
    return false;
  }
};
int main() {
  int reserved = 0;
  int capacity = 0;
  int command = 0;
  cout << "Enter flight capacity: ";
  cin >> capacity;
  cout << endl << "Enter number of reserved seats: ";
  cin >> reserved;
  cout << endl;
  flight_booking booking_1(1, capacity, reserved);
  booking_1.print_status();
 
  while (command != 3){
    cout << "What would you like to do?(please enter number of command)" << endl << "1. Add reservations" << endl << "2. Cancel reservations" << endl << "3. Quit" << endl;
    cin >> command;
    
    switch(command){
      case 1:
      int n;
      cout << "How many reservations would you like to add?" << endl;
      cin >> n;
      if(booking_1.add_reserved(n)){
        cout << "Reservations added" << endl;
        booking_1.print_status();
      } else {
        cout << "Cannot perform this operation" << endl;
      }
      break;
    case 2:
      int n2;
      cout << "How many reservations would you like to cancel?" << endl;
      cin >> n2;
      if(booking_1.cancel_reserved(n2)){
        cout << "Reservations cancelled" << endl;
        booking_1.print_status();
      } else {
        cout <<  "Cannot perform this operation" << endl;
      }
    }
  }
}