#include <iostream>

using namespace std;

int m, n;

int main()
{
    cout << "m: ";
    cin >> m;

    cout << "n: ";
    cin >> n;

    cout << "Before: " << "m = " << m << ", " << "n = " << n << endl;

    int res = n-- * m;

    cout << "Result: " << res << endl;
    cout << "After: " << "m = " << m << ", " << "n = " << n << endl;

    return 0;
}