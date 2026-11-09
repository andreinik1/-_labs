// Імпортування бібліотек
#include <iostream>
#include <cstdlib>
#include <ctime>

// Викорстання неймспейсу std
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
            int rand_number = ((rand() % 10000) - 3000) / 1000.0;
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

    // Ініціалізація змінної для перевірки
    // наявності рядка з позитивним добутком елементів
    bool has_positive_product = false;

    for (int i = 0; i < rows; i++)
    {
        int res_of_mnoj = 1;

        // Обчислення добутку елементів рядка
        for (int j = 0; j < cols; j++)
        {
            res_of_mnoj *= matrix[i][j];
        }

        // Встановлення змінної в true, якщо добуток елементів рядка позитивний
        if (res_of_mnoj > 0)
        {
            has_positive_product = true;
        }
    }

    //Вивід результату перевірки
    if (!has_positive_product)
    {
        cout << "No row has a positive product of elements." << endl;
    }
    else
    {
        cout << "At least one row has a positive product of elements." << endl;
    }

    return 0;
}