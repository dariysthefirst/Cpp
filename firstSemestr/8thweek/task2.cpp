#include <iostream>
using namespace std;

int main() {
  int length = 5;
  int array[length];
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    array[i] = -5 + rand() % 9;
  }
  cout << "initial array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl;

  int maxIndex = 0;
  int maxEl = array[0];
  for (int i = 0; i < length; i++) {
    if (array[i] > maxEl) {
      maxEl = array[i];
      maxIndex = i;
    }
  }
  for (int i = 0; i < maxIndex; i++) {
    if (array[i] < 0) {
      array[i] = 0;
    }
  }
  cout << "final array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl;
}
