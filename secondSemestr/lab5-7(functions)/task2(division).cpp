#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  cout << "Prime numbers: ";
  for (int i = 1; i <= 21; i++) {
    if (isPrime(i)) {
      cout << i << "; ";
    }
  }
}