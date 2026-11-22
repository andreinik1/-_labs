#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int prog1(int a, int b, int c, int d)
{
    int arr[4] = {a, b, c, d};
    int maxVal = a;
    for (int el : arr)
    {
        if (el > maxVal)
        {
            maxVal = el;
        }
    }
    return pow(maxVal, 3);
}

int prog2(int a, int b, int c, int d)
{
    int arr[4] = {a, b, c, d};
    int max1 = 0, max2 = 0;
    for (int el : arr)
    {
        if (el > max1)
        {
            max2 = max1;
            max1 = el;
        }
        else if (el > max2)
        {
            max2 = el;
        }
    }

    return pow(abs((max2 - max1)), 2);
}

int main()
{
    int vibor;
    cout << "Choose programm 1 or 2: " << endl;
    cin >> vibor;
    int a, b, c, d;

    if (vibor != 1 && vibor != 2)
    {
        cout << "Enter only 1 or 2!";
        return 0;
    }

    cout << "Enter 4 numbers one by one: " << endl;
    cin >> a >> b >> c >> d;

    if (vibor == 1)
    {
        int res = prog1(a, b, c, d);
        string text = "The biggest cube is: " + to_string(res);
        
        cout << string(50, ' ') << "\033[32m" << text << "\033[0m\n";
    }
    else if (vibor == 2)
    {
        int res = prog2(a, b, c, d);
        string text = "Kvadrat riznicy dvox naibilshix chisel: " + to_string(res);

        cout << string(50, ' ') << "\033[32m" << text << "\033[0m\n";
    }
}