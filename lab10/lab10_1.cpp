#include <iostream>

using namespace std;

void calcSumOfDigitsByPointer(int* numPtr) {
    if (numPtr == nullptr) return;

    int temp = *numPtr;
    int total = 0;

    while (temp > 0) {
        total += temp % 10;
        temp /= 10;
    }

    *numPtr = total;
}

int theosophicalSum(int number) {
    int current = number;
    while (current >= 10) {
        calcSumOfDigitsByPointer(&current);
    }
    return current;
}

int main() {
    int rawInput;
    cout << "Enter number: ";
    cin >> rawInput;

    int number = abs(rawInput);

    if (number == 0) {
        cout << "Number must be greater than 0!" << endl;
        return 1;
    }

    int result = theosophicalSum(number);

    cout << "Teosof sum of " << number << " = " << result << endl;

    return 0;
}