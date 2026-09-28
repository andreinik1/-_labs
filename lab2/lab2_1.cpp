#include <iostream>
#include <cmath>

using namespace std;

double a, b;

int main()
{
    cin >> a >> b;

    double ch = pow((a - b), 4) - (pow(a, 4) - 4 * pow(a, 3) * b);
    double zn = (6 * a * a * b * b) - (4 * a * pow(b, 3)) + pow(b, 4);
    
    double res = ch / zn;
    
    cout << "Res: " << res << endl;

    return 0;
}