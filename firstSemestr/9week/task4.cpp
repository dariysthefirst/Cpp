#include <iostream>
using namespace std;

int main() {
  int length = 7;
  int array[length];
  int A;
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    array[i] = -10 + rand() % 21;
  }

  cout << "initial array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl << "enter a number: ";
  cin >> A;
  int counter = 0;
  for(int i = 0; i < length; i++){
    if(array[i] > A){
      counter++;
    } else {
      continue;
    }
  }
  cout << "number of values greater than A: " << counter;
}
