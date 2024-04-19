#include <iostream>
using namespace std;

int main()
{
    int c0;
    cout << "enter c0: ";
    cin >> c0;
    if (c0 <= 0)
    {
        cout << "invalid.";
        return 1;
    }
    int counter = 0;
    while (c0 != 1)
    {
        if (c0 % 2 == 0)
        {
            c0 = c0 / 2;
        }
        else if (c0 % 2 != 0)
        {
            c0 = 3 * c0 + 1;
        }
        counter++;
        cout << c0;
    }
    cout << endl
         << "iterations: " << counter << endl;
}