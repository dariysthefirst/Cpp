#include <iostream>
using namespace std;

int main() {
  const int r = 3;
  const int c = 3;
  int i, j;
  int oddCount = 0;
  int evenCount = 0;
  int arr[r][c];
  
  srand(time(NULL));

  cout << "initial matrix:" << endl;
  for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
      *(*(arr+i)+j) = -5 + rand() % 11;
      cout << *(*(arr+i)+j) << " ";
    }
    cout << endl;
  }
  cout << "---------"<< endl << "the main diagonal: ";
  
  for(i = 0; i < r; i++){
       cout << *(*(arr + i) + i) << " ";
      }
    cout <<endl << "---------"<< endl << "the secondary diagonal: ";
    int columns = c - 1;
      
  for(i = 0; i < r; i++){
       cout << *(*(arr + i) + columns) << " ";
       columns--;
      }
      cout <<endl << "---------";
      
  for(i = 0; i < r; i++){
      for(j=0; j < c; j++){
          if(*(*(arr+i)+j) %2 == 0){
              evenCount++;
              }
          else{
                oddCount++;
              }
          }
      }
      cout << endl << "number of evens: " << evenCount;
      cout << endl << "number of odds: " << oddCount;
  
}
