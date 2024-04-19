#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "enter n: ";
    cin >> n;
    if (n < 1)
    {
        cout << "n must be greater than 1" << endl;
        return 0;
    }
    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
    for (int i = 0; i < n; i++)
    {
        cout << '|';
        for (int j = 0; j < n; j++)
            cout << ' ';
        cout << '|' << endl;
    }
    cout << '+';
    for (int i = 0; i < n; i++)
        cout << '-';
    cout << '+' << endl;
    return 0;
}