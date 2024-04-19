#include <iostream>
using namespace std;

int main() {
  int m = 4;
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
  int minEl = array[0][0];
  for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++){
      if(array[i][j] < minEl){
        minEl = array[i][j];
      }
    }
  }
  cout << "minimal element:  " << minEl << endl;
}
