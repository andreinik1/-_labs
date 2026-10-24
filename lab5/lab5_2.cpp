#include <iostream>
using namespace std;

int main()
{
    double a, res = 0;
    int n;
    
    cout << "Enter number a: " << endl;
    cin >> a;
    cout << "Enter number N: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        res = res + (1 + (1/(a+(2*i))));
    }
    
    cout << "Result: " << res;
        
    return 0;
}