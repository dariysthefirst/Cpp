#include <iostream>
using namespace std;

int main() {
  int m = 3;
  int n = 4;
  int array[m][n];
  srand(time(NULL));
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        array[i][j] = -5 + rand() % 11;
        cout << "\t" << array[i][j] << " ";
      }
      cout << endl;
  }
  int maxEl = array[0][0];
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++){
      if(array[i][j] > maxEl){
        maxEl = array[i][j];
      }
    }
  }
  cout << "maximum element:  " << maxEl << endl;
}
