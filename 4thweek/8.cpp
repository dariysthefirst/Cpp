#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
int num1, num2;
  printf("Enter two numbers: ");
  cin >> num1 >> num2 ;
  
  float changed1 = 1.0/num1;
  float changed2 = 1.0/num2;
  float epsilon = fabs(changed1 - changed2);
  printf("Epsilon: %f", epsilon);
  
}