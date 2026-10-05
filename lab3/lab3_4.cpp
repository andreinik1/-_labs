#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c, x, F;

    cout << "Input (a, b, c) and x:" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;


    if (x < 1 && x != 0) {
        F = a * x * x + (b / c);
    } 
    else if (x > 1.5 && c == 0) {
        F = (x - a) / pow(x - c, 2);
    } 
    else {
        F = (x * x) / (c * c);
    }

    cout << "\n F = " << F << endl;

    return 0;
}

