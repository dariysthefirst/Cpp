#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
  int a = 10;
  double b = 0.5;
  double result;
  
  result = ((0.81*(pow(a, 0.33))-((1/2.125)*(pow(b, 0.33))))*exp(a));
  cout << result;
}