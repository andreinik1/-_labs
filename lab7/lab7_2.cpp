#include <iostream>
using namespace std;

int main()
{

    int matrix[3][3] = {
        {3, 2, 1},
        {-5, 8, 0},
        {9, -1, 4},
    };

    for (int i = 0; i < 3; i++)
    {
        int zero_count = 0;

        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                zero_count++;
            }
        }

        if (zero_count == 1)
        {
            cout << "Rows with only one zero: " << i + 1 << "; ";
        }
    }

    return 0;
}