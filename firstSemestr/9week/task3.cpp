#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int length = 7;
  int array[length];
  srand(time(NULL));
  for(int i = 0; i < length; i++){
    int randomNum;
    do{
      randomNum = -5 + rand() % 11;
    } while(count(array, array + length, randomNum) > 0);
      array[i] = randomNum;
  }

  cout << "initial array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl;

  int minEl = array[0];
  int minIndex = 0;
  int maxEl = array[0];
  int maxIndex = 0;
  for(int i = 0; i < length; i++){
    if(array[i] < minEl){
      minEl = array[i];
      minIndex = i;
    }
    else if(array[i] > maxEl){
      maxEl = array[i];
      maxIndex = i;
    }
  }
  array[minIndex] = maxEl;
  array[maxIndex] = minEl;

  cout << "swaped array: ";
  for (int i = 0; i < length; i++) {
    cout << array[i] << "; ";
  }
  cout << endl;
}
