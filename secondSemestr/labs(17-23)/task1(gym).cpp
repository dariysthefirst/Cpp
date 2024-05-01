#include <iostream>
#include <string>
#include <limits>

using namespace std;
class gym_membershipsubs {
private:
  int id;
  string name;
  int months;
  int get_id() { return this->id; }

public:
  gym_membershipsubs() {
    this->id = 0;
    this->name = "";
    this->months = 0;
  }
  gym_membershipsubs(int id, string name) {
    this->id = id;
    this->name = name;
    this->months = 0;
  }
  void create_member(int id, string name) {
    if (get_id() == 0 && id > 0 && id <= 10) {
      this->id = id;
      this->name = name;
      cout << "Member added!" << endl;
    } else {
      cout << "Member already exists or invalid input for id. Please check the "
              "data you provided."
           << endl;
    }
  }
  void delete_member(int id) {
    if (get_id() == id) {
      cout << "Member deleted!" << endl;
    } else {
      cout << "Member does not exist.";
    }
  }
  void extend_subs(int id, int months) {
    if (get_id() == id) {
      this->months += months;
      cout << "Subscription extended!" << endl;
    } else {
      cout << "Cannot perform this operation. Please check the data you "
              "provided."
           << endl;
    }
  }
  void cancel_subs(int id) {
    if (get_id() == id) {
      this->months = 0;
    } else {
      cout << "Cannot perform this operation. Please check the data you "
              "provided."
           << endl;
    }
  }

  void print_members() {
    if (get_id() != 0) {
      cout << "Id: " << this->id << endl
           << "Name: " << this->name << endl
           << "Membership subscription validity: " << this->months << " months."
           << endl
           << "___________________________________________" << endl;
    }
  }
};
int main() {
  int length = 10;
  gym_membershipsubs members[length];
  int id = 0;
  string name = "";
  int months = 0;
  int command = 0;
  while (command != 6) {
    cout << "What would you like to do?(please enter number of command)"
         << "\n 1.Create a member(max - 10)"
         << "\n 2.Extend a subscription"
         << "\n 3.Cancel subscription"
         << "\n 4.Delete member"
         << "\n 5.Print all members"
         << "\n 6.Quit" << endl;
    cin >> command;
      if (cin.fail()) {
          cin.clear();  
          cin.ignore(numeric_limits<int>::max(), '\n'); 
          cout << "Invalid input. Please enter a number." << endl;
          continue; 
      }
      switch (command) {
      case 1:
        cout << "Enter the id(1 - 10): ";
        cin >> id;
        if (id > length) {
          cout << "You are out of range." << endl;
          break;
        } else {
          cout << "Enter the name: ";
          cin >> name;
          members[id - 1].create_member(id, name);
        }
        break;
      case 2:
        cout << "Enter the member`s id: ";
        cin >> id;
        cout << "Enter the number of months to extend: ";
        cin >> months;
        members[id - 1].extend_subs(id, months);
        break;
      case 3:
        cout << "Enter the member`s id: ";
        cin >> id;
        members[id - 1].cancel_subs(id);
        break;
      case 4:
        cout << "Enter the member`s id to delete: ";
        cin >> id;
        members[id - 1].delete_member(id);
        members[id - 1] = gym_membershipsubs();
        break;
      case 5:
        for (int i = 0; i < length; i++) {
          members[i].print_members();
        }
        break;
      }
    } 
  }

gym