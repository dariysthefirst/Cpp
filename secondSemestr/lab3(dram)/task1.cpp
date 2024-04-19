#include <iostream>
using namespace std;

int main() {
  int num;
  int positiveCount = 0;
  int negativeCount = 0;
  int zeroCount = 0;
  cout << "Enter a number: ";
  cin >> num;   
  srand(time(NULL));
  
  int *arr = new int[num];
  for(int i = 0; i < num; i++){
    arr[i] = -2 + rand() % 5;
    cout << arr[i] << "; ";
  } cout << endl;
  for(int i = 0; i < num; i ++){
    if(arr[i] > 0){
      positiveCount++;
    } else if(arr[i] < 0){
      negativeCount++;
    } else if(arr[i] == 0){
        zeroCount++;
    }
  }
  cout << "Amount of positive numbers: " << positiveCount << endl << "Amount of negative numbers: " << negativeCount << endl << "Amount of zeros: " << zeroCount;
  delete[] arr;
}