#include <iostream>
#include <string>
using namespace std;

class ShopItemOrder {
private:
  string name;
  double unit_price;
  int quantity;

public:
  ShopItemOrder(string name, double unit_price, int quantity) {
    this->name = name;
    this->unit_price = unit_price;
    this->quantity = quantity;
  }
  string get_name(){return this->name;}
  double get_unit_price(){return this->unit_price;}
  int get_quantity(){return this->quantity;}
  void set_name(string name){
    this->name = name;
  }
void set_unit_price(double unit_price){
  this->unit_price = unit_price;
}
void set_quantity(int quantity){
  this->quantity = quantity;
}
double get_total_price(){
  return this->unit_price * this->quantity;
}
void print_order(){
  cout << "Information about your order: " << endl << "Item Name: " << this->name << endl << "Unit Price: " << this->unit_price << endl << "Quantity: " << this->quantity << endl << "Total Price: " << this->get_total_price() << endl;
}
};
int main(){
  ShopItemOrder item1("Laptop", 30000, 5);
  ShopItemOrder item2("Landline phone", 7000, 10);
  cout << "The total price of " << item2.get_name() << " is " << item2.get_total_price() << endl;
  item1.print_order();
}