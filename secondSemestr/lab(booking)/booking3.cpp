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
  void upd_percentage() {
    percentage = static_cast<double>(reserved) / capacity * 100.0;
  }

public:
  flight_booking() {
    this->id = 0;
    this->capacity = 0;
    this->reserved = 0;
  }
  flight_booking(int id, int capacity, int reserved) {
    this->id = id;
    this->capacity = capacity;
    if (reserved <= capacity) {
      this->reserved = reserved;
    } else {
      this->reserved = 0;
    }
  }
  int get_id() { return this->id; }

  void print_status() {
    upd_percentage();
    cout << "Flight " << id << ": " << reserved << "/" << capacity << " ("
         << fixed << setprecision(2) << percentage << "%) is reserved" << endl;
  }
  void add_reserved(int id, int n) {
    reserved += n;
    upd_percentage();
    if (percentage > 105.0) {
      reserved -= n;
      cout << "Cannot perform this operation. The flight would be overcrowded."
           << endl;
    }
  }

  void cancel_reserved(int n) {
    if (n <= capacity) {
      reserved -= n;
      if (reserved >= 0) {
        cout << "Successfully canceled " << n << " reservations." << endl;
      } else {
        reserved += n;
        cout << "Cannot perform this operation." << endl;
      }
    } else {
      cout << "Cannot perform this operation." << endl;
    }
  }
};
bool isValidData(int id, int n) {
  if (id >= 1 && id <= 10 && n >= 0) {
    return true;
  }
  return false;
}
int main() {
  int id = 0;
  int capacity = 0;
  int n = 0;
  int command = 0;
  flight_booking bookings[10];

  while (command != 6) {
    cout << "What would you like to do?(please enter number of command)" << endl
         << "1. Create a flight(max - 10)" << endl
         << "2. Add reservations" << endl
         << "3. Cancel reservations" << endl
         << "4. Delete a flight" << endl
         << "5. Print all flights" << endl
         << "6. Quit" << endl;
    cin >> command;
    switch (command) {
    case 1:
      cout << "Enter flight id and capacity: ";
      cin >> id >> capacity;
      if (isValidData(id, capacity)) {
        if (bookings[id - 1].get_id() != 0) {
          cout << "Flight already exists" << endl;
        } else {
          bookings[id - 1] = flight_booking(id, capacity, 0);
          cout << "Flight " << id << " created" << endl;
        }
      } else {
        cout << "Invalid input. Please check the data you provided." << endl;
      }
      break;
    case 2:
      cout << "Enter flight id and number of reservations to add: ";
      cin >> id >> n;
      if (isValidData(id, n)) {
        if (bookings[id - 1].get_id() == 0) {
          cout << "Flight does not exist" << endl;
        } else {
          bookings[id - 1].add_reserved(id, n);
          bookings[id - 1].print_status();
        }
      } else {
        cout << "Invalid input. Please check the data you provided." << endl;
      }
      break;
    case 3:
      cout << "Enter flight id and number of reservations to cancel: ";
      cin >> id >> n;
      if (isValidData(id, n)) {
        if (bookings[id - 1].get_id() == 0) {
          cout << "Flight does not exist" << endl;
        } else {
          bookings[id - 1].cancel_reserved(n);
          bookings[id - 1].print_status();
        }
      } else {
        cout << "Invalid input. Please check the data you provided." << endl;
      }
      break;
    case 4:
      cout << "Enter flight id to delete: ";
      cin >> id;
      if (isValidData(id, 0)) {
        if (bookings[id - 1].get_id() == 0) {
          cout << "Flight does not exist" << endl;
        } else {
          bookings[id - 1] = flight_booking();
          cout << "Flight " << id << " deleted" << endl;
        }
      } else {
        cout << "Invalid input. Please check the data you provided." << endl;
      }
      break;
    case 5:
      for (int i = 0; i < 10; i++) {
        if (bookings[i].get_id() != 0) {
          bookings[i].print_status();
        }
      }
    }
  }
}
