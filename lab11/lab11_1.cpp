// Імпортування бібліотек
#include <iostream>
#include <string>
// Використання неймспейсу
using namespace std;

// Створення константи, яка задає ліміт кількості символів
const size_t MAX_LEN = 255;

// Функція підрахунку слів у рядку з урахуванням кількох пробілів і крапки в кінці
int countwords(const string &text)
{
    // Лічильник слів
    int wordCount = 0;
    bool inWord = false; // Ознака того, що ми зараз усередині слова

    // Цикл де ми рахуемо кількість слів
    for (size_t i = 0; i < text.length(); ++i)
    {
        char ch = text[i];
        // Символи, відмінні від пробілу та крапки, вважаємо частиною слова
        if (ch != ' ' && ch != '.')
        {
            if (!inWord)
            {
                ++wordCount;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    // Повертаємо результат
    return wordCount;
}

int main()
{
    cout << "Ne bilshe 255 simvoliv" << endl;

    string s1, s2;

    // Отримання рядків
    cout << "Enter 1-st row: " << endl;
    getline(cin, s1);
    cout << "Enter 2-nd row: " << endl;
    getline(cin, s2);

    if (s1.length() > MAX_LEN || s2.length() > MAX_LEN)
    {
        cout << "Max len 255 symbols";
        return 1;
    }

    // Отримання кількості слів в обох рядках
    int c1 = countwords(s1);
    int c2 = countwords(s2);

    // Вивід результату
    if (c1 > c2)
    {
        cout << "Res: in 1-st row more words";
    }
    else if (c2 > c1)
    {
        cout << "Res: in 2-nd row more words";
    }
    else
    {
        cout << "Res: in 1-st and 2-nd row number of words are equal!";
    }

    // Завершення програми
    return 0;
}