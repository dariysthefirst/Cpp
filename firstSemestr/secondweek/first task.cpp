#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int x;
  double y;
  double A;
  double C;

  cout << "Enter A and C value: ";
  cin >> A >> C;
  if (A == C) {
    y = x * pow((A - C), 3);
    cout << "Result: " << y;
  } else if (A != C) {
    y = pow(x, 3) - A;
    cout << "Result: " << y;
  } else if (A == C) {
    y = x + pow(A, 3);
    cout << "Result: " << y;
  }
}