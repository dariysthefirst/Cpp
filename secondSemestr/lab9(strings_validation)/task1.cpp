#include <iostream>
#include <string>

using namespace std;
bool validation(string& password){
  bool hasUpper = false;
  bool hasLower = false;
  bool hasDigit = false;
  bool hasSpecial = false;
  if(password.length() < 8){
    cout << "Password must be at least 8 characters long." << endl;
  }
  for(char character : password){
    if(isupper(character)){
      hasUpper = true;
    } else if (islower(character)){
      hasLower = true;
    }
    else if(isdigit(character)){
      hasDigit = true;
    }
    else if (!isalnum(character)){
      hasSpecial = true;
    }
  }
  if(!hasUpper){
    cout << "Password must contain at least one uppercase letter." << endl;
  }
  if(!hasLower){
    cout << "Password must contain at least one lowercase letter." << endl;
  }
  if(!hasDigit){
    cout << "Password must contain at least one digit." << endl;
  }
  if(!hasSpecial){
    cout << "Password must contain at least one special character." << endl;
  }
  return hasUpper & hasLower & hasDigit & hasSpecial;
}
int main() {
  string password;
  cout << "Enter password please: ";
  getline(cin, password);
  if(validation(password)){
    cout << "The password is valid.";
  }
}