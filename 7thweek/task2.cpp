#include <iostream>
using namespace std;

int main(void)
{
    double pi4 = 0.;
    long n;
    cout << "Number of iterations? ";
    cin >> n;
    int mult = 1;
    int denom = 1;
    for (int i = 1; i < n; i++)
    {
        pi4 += mult * (1.0 / denom);
        mult *= -1;
        denom += 2;
    }
    cout << "Pi = " << (pi4 * 4.) << endl;
    return 0;
}