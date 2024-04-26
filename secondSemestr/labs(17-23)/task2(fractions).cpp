#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
class fraction {
private:
  int num;
  int den;
  int whole_number;

public:
  fraction(int n, int d) {
    this->num = n;
    this->den = d;
    this->whole_number = (int)this->num / this->den;
  }
  string toString() {
    int new_num;
    string result;
    if (this->whole_number != 0) {
      if (abs(this->den) == 1 || abs(this->den) == abs(this->num)) {
        if (this->den < 0) {
          result = to_string(-this->num) + "/" + to_string(abs(this->den));
        } else {
          result = to_string(this->num) + "/" + to_string(this->den);
        }
      } else {
        new_num = this->num % this->den;
        result = to_string(this->whole_number) + " " + to_string(abs(new_num)) +
                 "/" + to_string(abs(this->den));
      }
    } else {
      if (this->den > 0) {
        result = to_string(this->num) + "/" + to_string(this->den);
      } else if (this->den < 0) {
        result = to_string(-this->num) + "/" + to_string(abs(this->den));
      }
    }
    return "The fraction " + result;
  }
  double toDouble() { return static_cast<double>(this->num) / (this->den); }
};
int main() {
  int den, num, pos;
  string s = "";
  cout << "Enter a number to calculate([num]/[den]): " << endl;
  getline(cin, s);
  s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());
  pos = s.find('/');
  if (pos == -1) {
    cout << "Invalid input." << endl;
  } else {
    num = stoi(s.substr(0, pos));
    den = stoi(s.substr(pos + 1, s.length()));
    if (den == 0) {
      cout << "The denominator can't be equal to zero." << endl;
    }
    fraction a(num, den);
    cout << a.toString() << " is " << fixed << setprecision(2) << a.toDouble()
         << " in decimal." << endl;
  }
}
