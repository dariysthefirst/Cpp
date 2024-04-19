#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
  int a = 10;
  double b = 0.5;
  double result;

  result = (((0.314*exp(a)) - (0.512*exp(b)))/sin((b/3)*M_PI))*log(a);
  cout << result;
}