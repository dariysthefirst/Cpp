#include <iostream>
using namespace std;

int main() {
  int length = 7;
  int array[length];
  int index = -1;
  srand(time(NULL));
  for (int i = 0; i < length; i++) {
    array[i] = -10 + rand() % 21;
  }

  cout << "initial array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  for(int i = 0; i < length; i++){
    if(array[i] == 0){
      index = i;
      break;
    } else {
      continue;
    }
  }
  cout << endl;
  if(index < length && index >= 0){
    cout << "the first index of zero element: " << index;
  } else {
    cout << "no null element found.";
  }
}
