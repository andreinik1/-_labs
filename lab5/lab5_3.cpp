#include <iostream>
using namespace std;

int main()
{
    
    int total = 120;
    int var = 1;

    for (int i = 0; i <= total / 6; i++) {
        int zal = total - (6 * i);

        if (zal % 4 == 0) {
            int x = zal / 4;
            cout << "Var " << var++ << ": ";
            cout << x << " tables with 4 places and ";
            cout << i << " tables with 6 places.\n";
        }
    }
    
    return 0;
}