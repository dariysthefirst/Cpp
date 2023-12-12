#include <iostream>
using namespace std;

int main() {
  int m = 4;
  int n = 6;
  int array[m][n];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        array[i][j] = -5 + rand() % 11;
        cout << "\t" << array[i][j] << " ";
      }
      cout << endl;
  }
  for(int j = 0; j < n; j++) {
    int sum = 0;
    for(int i = 0; i < m; i++){
      sum += array[i][j];
      }
    cout << "sum of column " << j + 1 << ": " << sum << endl;
    }
  }
