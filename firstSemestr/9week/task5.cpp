#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int length = 7;
  int array[length];
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    int randomNum;
    do {
      randomNum = -5 + rand() % 11;
    } while (count(array, array + length, randomNum) > 0);
    array[i] = randomNum;
  }

  cout << "initial array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl;

  int max = array[0];
  int secondMax = array[1];
  for (int i = 0; i < length; i++) {
    if (array[i] > max) {
      secondMax = max;
      max = array[i];
    } else if (array[i] > secondMax && array[i] != max) {
      secondMax = array[i];
    }
  }
  cout << "the second largest number: " << secondMax;
}
