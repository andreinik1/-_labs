#include <iostream>
#include <cmath>

using namespace std;
int d1, d2;

int main()
{
    cout << "d1: ";
    cin >> d1;
    cout << "d2: ";
    cin >> d2;

    double res = (d1 * d2) / sqrt((d1 * d1) + (d2 * d2));

    cout << "h: " << res;

    return 0;
}