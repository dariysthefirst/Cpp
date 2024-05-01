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
  void get_area(){ 
    if(this->area_needed){ 
      cout << "The area of the square with side "<< this->side << " - is " << this->side * this->side << endl; 
      this->area_needed = false; 
    } else { 
      cout << "The side of the square(which side was " << this->side << ") hasn't been changed" << endl; 
    } 
  } 
}; 
int main() { 
  Square s1(6); 
  Square s2(7); 
  s1.get_area(); 
  s1.set_side(6); 
  s1.get_area(); 
  s2.get_area(); 
  s2.set_side(12); 
  s2.get_area(); 

}

area(void)