#include <iostream>
using namespace std;

int main()
{
    // Ініціалізація змінних
    double arr[100];
    double res = 0.0;
    int zero_count = 0;
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
        int rand_number = ((rand() % 1000) - 500) / 10.0;
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
        // Перевірка на нульові елементи        
        if (arr[i] == 0.0)
        {
            zero_count++;
        }
        // Додавання позтивних елементів до суми
        else if (arr[i] > 0.0)
        {
            res += arr[i];
        }
        // Пропуск усіх інших елементів
        else
        {
            continue;
        }
    }

    // Вивід результатів
    cout << "Count of zero elements: " << zero_count << endl;
    cout << "Sum of positive elements: " << res << endl;

    return 0;
}