#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

// Функція перетворення рядку в окремі слова та результат
string toInitial(string r)
{
    // Команда для розбиття рядку на слова та пропуск зайвих пробілів
    istringstream iss(r);
    // Створення типу для збереження окремих слів
    vector<string> parts;
    string word;
    string result;

    // Зчитування слів по 1-му (оператор >> автоматично ігнорує кілька пробілів)
    while (iss >> word)
    {
        parts.push_back(word);
    }

    for (int i = 0; i < parts.size(); i++)
    {
        if (i == 0)
        {
            result += parts[i] + " ";
        }
        else
        {
            result += parts[i][0];
            result += ". ";
        }
    }

    return result;
}

int main()
{
    // Оголошення змінної для вводу
    string ryadok;

    cout << "Enter Name, Surname, Lastname: " << endl;
    // Отримання вводу від користувача
    getline(cin, ryadok);

    // Перевірка на максиамльно допустиму кількість символів
    if (ryadok.length() > 255)
    {
        cout << "Length of line should be less than 255 symbols!";
        return 0;
    }

    // Вивід результату
    cout << "Result: " << toInitial(ryadok);
    return 0;
}