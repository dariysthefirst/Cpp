#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int num;
    int result = 1;
for(int i = 0; i < 10; i++){
        if(num <= 0){
        cout << "invalid number, please enter natural number.\n";
        break;
    }
    else{
    cout << "Enter a natural number: \n";
    cin >> num;
    result *= num;
    }
}
if (result > 0) {
    cout << "your result is: " << result;
}
}
