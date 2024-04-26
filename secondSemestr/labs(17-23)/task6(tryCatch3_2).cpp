#include <iomanip>
#include <iostream>

using namespace std;

float internaldiv(float arg1, float arg2) {
  if (arg2 == 0) {
    throw invalid_argument("Division by zero!");
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
    } catch (const invalid_argument &exc) {
      cout << exc.what() << endl;
    }
  }
  return 0;
}