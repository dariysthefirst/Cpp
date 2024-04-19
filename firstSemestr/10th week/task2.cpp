#include <iostream>
using namespace std;

int main() {
  int m = 6;
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
  for(int j = 0; j < n; j++) {
    int counter = 0;
    for(int i = 0; i < m; i++){
      if(array[i][j] %2 == 0){
        counter++;
      }
    }
    cout << "column " << j + 1 << " has " << counter << " even numbers" << endl;
  }
}
