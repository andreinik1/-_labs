// Імпортування бібліотек
#include <iostream>
#include <cstdlib>
#include <ctime>

// Використання неймспейсу std
using namespace std;

int main()
{
    // Ініціалізація змінних
    const int MAX_COLS = 100;
    const int MAX_ROWS = 100;
    double matrix[MAX_ROWS][MAX_COLS];
    int rows, cols;

    // Отримання розміру матриці
    cout << "Enter number of rows (max 100): " << endl;
    cin >> rows;
    cout << "Enter number of cols (max 100): " << endl;
    cin >> cols;

    // Валідація розміру матриці
    if (rows < 1 || rows > MAX_ROWS || cols < 1 || cols > MAX_COLS)
    {
        cout << "Invalid size of matrix!" << endl;
        return 1;
    }

    // Налаштування генератору
    // (використання srand, щоб задати сід генерації,
    // аби занчення не повторювались)
    srand(static_cast<unsigned int>(time(0)));

    // Заповнення матриці числами
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            double rand_number = ((rand() % 1000) - 500) / 10.0;
            matrix[i][j] = rand_number;
        }
    }

    // Вивід матриці
    cout << "Matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "{ ";
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << ", ";
        }
        cout << "}" << endl;
    }


    int positive_nums = 0;

    // Обчислення кількості позитивних елементів
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > 0)
            {
                positive_nums++;
            }
        }
    }

    // Вивід результату
    cout << "Result: " << positive_nums + matrix[rows - 2][cols - 2] << endl;

    return 0;
}