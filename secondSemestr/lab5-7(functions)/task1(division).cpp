#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int num) {
  if(num <=1 ){
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
  int number;
  cout << "Enter the number to check: ";
  cin >> number;
  if (isPrime(number)) {
    cout << "The number is prime";
  } else {
    cout << "The number is composite";
  }
}