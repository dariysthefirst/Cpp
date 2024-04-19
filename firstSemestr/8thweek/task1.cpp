#include <iostream>
using namespace std;

int main(){
  int length = 12;
  int array[length];
  srand(time(NULL));
  for (int i = 0; i < length; i++){
    array[i] = rand() % 100;
    cout << array[i] << "; ";
  }
  cout << endl;
  for (int i = 0; i < length - 1; i++){
    for (int j = 0; j < length - i - 1; j++){
      if (array[j] < array[j + 1]){
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < length; i++){
    cout << array[i] << "; ";
  }
  cout << endl;

  for (int i = 0; i < length - 1; i++){
    for (int j = 0; j < length - i - 1; j++){
      if (array[j] > array[j + 1]){
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < length; i++){
    cout << array[i] << "; ";
  }
}
