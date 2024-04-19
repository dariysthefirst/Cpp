#include <iostream>
using namespace std;

int main() {
  int m = 5;
  int n = 7;
  int array[m][n];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        array[i][j] = -5 + rand() % 11;
        cout << "\t" << array[i][j] << " ";
      }
      cout << endl;
  }
  for(int i = 0; i < m; i++) {
    int sum = 0;
    for(int j = 0; j < n; j++){
      sum += array[i][j];
      }
    cout << "sum of row " << i + 1 << ": " << sum << endl;
    }
  }
