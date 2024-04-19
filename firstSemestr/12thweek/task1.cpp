#include <iostream>
using namespace std;

int main() {
  int n = 7;
  int arr[n], i, *ptr;
  ptr = arr;
  srand(time(NULL));
  cout << "initial array: ";
  for (i = 0; i < n; i++) {
    *(ptr+i) = -5 + rand() % 11;
    cout << *(ptr+i) << "\t";
  }
  int minEl = *ptr;
  for (i = 0; i < n; i++) {
    if(*(ptr+i) < minEl){
      minEl = *(ptr+i);
    }
  }
  cout << endl << "min element: " << minEl;
}