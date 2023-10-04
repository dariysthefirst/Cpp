#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a, b, h;
    double f;
    cout << "Enter start and end values: \n";
    cin >> a >> b;
    cout << "Enter step h: \n";
    cin >> h;
    cout << "-----------------" << endl;
    cout << "|---X---|---Y---|" << endl;
    cout << "-----------------" << endl;
    for (; a <= b; a += h)
    {
        if (cos(a) <= 0)
        {
            cout << "Out of range of permissible values." << endl;
            continue;
        }
        f = (sqrt(cos(a))) + sin(a);
        cout << "|---" << a << "---|---" << f << "---|" << endl;
        cout << "-----------------" << endl;
    }
}
