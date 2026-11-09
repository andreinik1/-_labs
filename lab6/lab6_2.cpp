// Імпортування бібліотек
#include <iostream>
#include <cstdlib>
#include <ctime>

// Використання неймспейсу std
using namespace std;

int main()
{
    // Ініціалізація змінних
    double arr[100];
    double max_el = 0.0, sum_of_nums = 0.0, avg;
    int size_of_arr;

    // Отримання розміру масиву від юзера
    cout << "Enter size of array (max 100): ";
    cin >> size_of_arr;

    // Перевірка на валідність вводу
    if (size_of_arr < 0 || size_of_arr > 100)
    {
        cout << "Invalid size of array!" << endl;
        return 1;
    }

    // Налаштування генератору
    // (використання srand, щоб задати сід генерації,
    // аби занчення не повторювались)
    srand(static_cast<unsigned int>(time(0)));

    // Заповнення масиву числами
    for (int i = 0; i < size_of_arr; i++)
    {
        double rand_number = ((rand() % 1000) - 500) / 10.0;
        arr[i] = rand_number;
    }

    // Вивід масиву
    cout << "Array: ";
    for (int i = 0; i < size_of_arr; i++)
    {
        cout << arr[i] << (i < size_of_arr - 1 ? ", " : " ");
    }
    cout << endl;


    // Обчислення результатів
    for (int i = 0; i < size_of_arr; i++)
    {
        // Додавання до загальної суми
        sum_of_nums += arr[i];

        // Перевірка умови на максимальний елемент
        if (arr[i] > max_el)
        {
            max_el = arr[i];
        }
    }

    //Знаходження середнього арифметичного значення
    avg = sum_of_nums / size_of_arr;

    // Вивід результатів
    cout << "Max element: " << max_el << endl;
    cout << "Average: " << avg << endl;
    cout << "Difference: " << max_el - avg << endl;

    return 0;
}