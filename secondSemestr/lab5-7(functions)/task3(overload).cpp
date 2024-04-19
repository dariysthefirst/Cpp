#include <iostream>
using namespace std;

int increment(int &var) { 
  return var++; 
}
int increment(int &var, int &inc) {
  return var += inc; 
}
int main(void) {
  int var = 0;
  for (int i = 0; i < 10; i++) {
    if (i % 2) {
      increment(var);
    } else {
      increment(var, i);
    }
  }
  cout << var << endl;
}
