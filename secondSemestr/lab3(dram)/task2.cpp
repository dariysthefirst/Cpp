#include <iostream>
using namespace std;

int main() {
  int rows, columns;
  int odd = 0, even = 0;
  srand(time(NULL));
  cout << "Enter dimensionality of array: ";
  cin >> rows >> columns;
  
  int **arr = new int*[rows];
  
  for(int i = 0; i < rows; i++){
    arr[i] = new int[columns];
  }
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
      arr[i][j] = -5 + rand() % 11;
      cout << arr[i][j] << " ";
      if(arr[i][j] % 2 == 0){
        even++;
      } else{
        odd++;
      }
    }
    cout << endl;
  }
  cout << "main diagonal: ";
  for(int i = 0; i < rows; i++){
    cout << arr[i][i] << " ";
  }
  cout << endl << "secondary diagonal: ";
  for(int i = 0; i < rows; i++){
    cout << arr[i][columns-1-i] << " ";
  }
  for (int i = 0; i < rows; i++) {
    delete[] arr[i];
  }
  delete[] arr;
  cout << endl << "Number of even elements: " << even << endl << "Number of odd elements: " << odd;
}
