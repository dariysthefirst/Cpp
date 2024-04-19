#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int N;
    int counter = 0;
    cout << "Enter your number: \n";
    cin >> N;
    if (N >= 100 && N <= 999)
    {
        while (N > 0)
        {
            int nextNum = N % 10;
            cout << nextNum << endl;
            N /= 10;
            if (nextNum > 5)
            {
                counter++;
            }
        }
        cout << "amount of numbers that are bigger than 5: " << counter;
    }
}