#include <iostream>
#include <string>
using namespace std;
class Person {
public:
  string name;
  int age;
  string career;
  string partner;
};
bool isMarried(Person *person){
  if(person->partner == ""){
    cout << person->name << " is single";
    return false;
  } else{
    cout << person->name << " is married to " << person->partner;
    return true;
  }
}
void print(Person *person) {
  cout << person->name << " is " << person->age << " years old." << endl;
  cout << person->name << " holds the posiiton of " << person->career << ". And " << (isMarried(person) ? "." : ".") << endl;
}

int main() {
  Person person1;
  Person person2;
  Person person3;
  person1.name = "Harry";
  person1.age = 26;
  person1.career = "Accountant";
  person2.name = "Ellie";
  person2.age = 34;
  person2.partner = "Johnny";
  person2.career = "Assistant";
  person3.name = "Gabriel";
  person3.age = 29;
  person3.career = "Chief accountant";
  
  cout << "Meet our employees:" << endl;
  print(&person1);
  print(&person2);
  print(&person3);
  return 0;
}