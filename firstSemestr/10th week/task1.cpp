#include <iostream>
using namespace std;

int main() {
  int m = 4;
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
  for(int i = 0; i < m; i++) {
    int counter = 0;
    for(int j = 0; j < n; j++){
      if(array[i][j] %2 == 0){
        counter++;
      }
    }
    cout << "row " << i + 1 << " has " << counter << " even numbers" << endl;
  }
}
