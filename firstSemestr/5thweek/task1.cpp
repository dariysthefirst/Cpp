#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double x;
    double result;
    for(int i = 0; i < 5; i++){
        cout << "Enter x value: ";
        cin >> x;
        result = (pow(sin(x), 5)) + (fabs(5*x - 1.5));
    cout << "your result is: " << result << '\n';
    }
    cout << "Task is finished. Thanks for participation.^-^";
}