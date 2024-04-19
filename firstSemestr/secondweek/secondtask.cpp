#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  double x;
  double y;
  //введемо початок координат та точки фігур.
  double origin = 0;
  double sqr1_x = 1;
  double sqr1_y = -1;
  double sqr2_x = -1;
  double sqr2_y = 1;
  
  cout << "Enter the coordinates of the point: ";
  cin >> x >> y;
  if((x >= origin && x <= 1 && y <= 0 && y >= -1) || (x <= 0 && x >= -1 && y >= 0 && y <=1)) {
    cout << "this point falls within the given area";
  } else {
    cout << "this point DOESN`T fall into the given area";
  }
}