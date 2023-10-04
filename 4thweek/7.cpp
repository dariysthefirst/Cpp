#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  double number;
  printf("Enter your number: ");
  cin >> number;
  printf("%.1f\n%.2f\n%f\n%.1f", number, number, number, number);
}