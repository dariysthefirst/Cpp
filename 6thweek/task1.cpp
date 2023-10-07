#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  int sum = 0;
  int digit;
  cout << "Enter your number: \n";
  cin >> N;
  while (N > 0) {
    digit = N % 10;
    if (digit > 2 && digit % 2 != 0) {
      sum += digit;
    }
    N /= 10;
  }
  cout << "Sum of odd numbers that are bigger than 2: " << sum;
}
