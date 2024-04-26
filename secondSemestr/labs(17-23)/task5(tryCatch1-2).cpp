#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
int a = 0, b = 0;
double c = 0;
  cout << "Enter a and b: ";
  
cin >> a >> b;
try{
  cout << "Division attempt..." << endl;
  if(b == 0){
    throw "Division by zero.";
  } else{
  c = static_cast<double>(a)/(b);
  cout << "The result of division: " << fixed << setprecision(2) << c;
  }
}
  catch(const char *exc){
  cout << "Invalid data. " << exc << endl;
  }
}