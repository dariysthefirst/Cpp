#include <iostream>
#include <iomanip>
const int DivideByZero = 111;

using namespace std;

float internaldiv(float arg1, float arg2) {
  if (arg2 == 0) {
    throw DivideByZero;
  } else {
    return arg1 / arg2;
  }
}
int main(void) {
  float r, a, b;
  cout << "Enter a and b: ";
  while (cin >> a) {
    cin >> b;
    try {
      r = internaldiv(a, b);
      cout << "The result: " << fixed << setprecision(2) << r << endl;
    } catch (int exc) {
      if (exc == DivideByZero) {
        cout << "Your input is not valid. You can't divide by zero." << endl;
      } else {
        cout << "An error occurred." << endl;
      }
    }
  }
  return 0;
}