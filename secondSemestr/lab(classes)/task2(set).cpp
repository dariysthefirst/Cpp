#include <iostream>
#include <string>
using namespace std;
class Square{
private:
double side;
double area;
public:
Square(double side){
  this->side = side;
  this->area = side*side;
  }
void print(){
  cout << "Side of the square: " << side << ". Area of the square: " << area << endl;
  }
void set_side(double side){
  if(side > 0){
    this->side = side;
    this->area = side*side;
    }
  }
};
int main(){
  Square square1(4);
  square1.print();
  square1.set_side(2.0);
  square1.print();
  Square square2(5.6);
  square2.print();
  square2.set_side(-5);
  square2.print();
}
