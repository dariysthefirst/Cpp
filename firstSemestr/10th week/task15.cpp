#include <iostream>
using namespace std;

int main() {
  int m = 3;
  int n = 3;
  int array[m][n];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        array[i][j] = -5 + rand() % 11;
        cout << "\t" << array[i][j] << " ";
      }
      cout << endl;
  }
  int mainSum = 0;
  int sideSum = 0;

  for (int i = 0; i < m; ++i) {
      mainSum += array[i][i];
      sideSum += array[i][n - 1 - i];
  }
  cout << "sum of main diagonal:  " << mainSum << endl;
  cout << "sum of side diagonal:  " << sideSum << endl;
}
