#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
int num1, num2, num3, num4;
  printf("Enter 4 numbers: ");
  cin >> num1 >> num2 >> num3 >> num4;
  printf(num1>=1 && num1<=255 && num2>=1 && num2<=255 &&num3>=1 && num3<=255 &&num4>=1 && num4<=255 ? "%d.%d.%d.%d" : "Wrong arguments", num1, num2, num3, num4);
}