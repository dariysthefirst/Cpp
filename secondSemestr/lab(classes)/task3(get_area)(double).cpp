#include <iostream>
#include <string>
using namespace std;
class Square {
private:
  double side;
bool area_needed;

public:
  Square(double side) { 
    this->side = side;
    this->area_needed = true;
  }
  void set_side(double side) {
    if (side > 0 && this->side != side) {
      this->side = side;
      this->area_needed = true;
    } else if(this->side == side){
      this->area_needed = false;
    }
  }
  double get_area(){
    return this->area_needed? this->side * this->side : 0;
  }
};
int main() {
  Square s1(6);
  Square s2(7);
  cout << s1.get_area() << endl;
  s1.set_side(6);
  cout << s1.get_area() << endl;
  cout << s2.get_area() << endl;
  s2.set_side(5);
  cout << s2.get_area() << endl;
}
