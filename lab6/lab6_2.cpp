#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> arr = {-2.5, 4.1, 0.0, 7.8, -1.0, 0.0, 3.2};
    double max_el = 0.0, sum_of_nums = 0.0, avg;

    for (double el : arr)
    {
        sum_of_nums += el;

        if (el > max_el)
        {
            max_el = el;
        }
    }

    avg = sum_of_nums / arr.size();

    cout << "Max element: " << max_el << endl;
    cout << "Average: " << avg << endl;
    cout << "Difference: " << max_el - avg << endl;

    return 0;
}