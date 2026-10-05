#include <iostream> 
using namespace std;

int task1(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int task2(int a, int b) {
    int min_number;
    
    if (a > b) {
        min_number = b;
    } else {
        min_number = a;
    }
    
    return min_number;
}

string task3(int a) {
    if (a % 2 == 0) {
        return "Parne";
    } else {
        return "Ne parne";
    }
}

string task4(int a) {
    if (a % 11 == 0) {
        return "True";
    } else {
        return "False";
    }
}

string task5(int a) {
    if (a < 2026) {
        return "True";
    } else {
        return "False";
    }
}

string task6(int a) {
    if (a / 10 > 1 && a / 10 < 10) {
        return "True";
    } else {
        return "False";
    }
}

string task7(char c) {
    if (isalpha(c)) {
        return "True";
    } else {
        return "False";
    }
}

string task8(int a) {
    if (a * a + 5 * a - 6 > 0) {
        return "True";
    } else {
        return "False";
    }
}

string task9(int a) {
    if (a <= 10 && a >= 5 && a <= 5 && a > 1000) {
        return "True";
    } else {
        return "False";
    }
}

string task10(int a) {
    if (a > -100 && a <= 10) {
        return "True";
    } else {
        return "False";
    }
}

int main()
{
    int a, b;
    cout << "For tasks that require 1 number, number1 will be used!" << endl;
    cout << "Input number 1: ";
    cin >> a;
    cout << "Input number 2: ";
    cin >> b;
    
    cout << "Task1: " << task1(a, b) << endl; 
    cout << "Task2: " << task2(a, b) << endl; 
    cout << "Task3: " << task3(a) << endl; 
    cout << "Task4: " << task4(a) << endl; 
    cout << "Task5: " << task5(a) << endl; 
    cout << "Task6: " << task6(a) << endl; 
    
    char c;
    cout << "Input char c: ";
    cin >> c;

    cout << "Task7: " << task7(c) << endl; 
    cout << "Task8: " << task8(a) << endl; 
    cout << "Task9: " << task9(a) << endl; 
    cout << "Task10: " << task10(a) << endl; 

    return 0;
}







