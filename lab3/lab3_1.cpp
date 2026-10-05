#include <iostream> 
using namespace std;


int main()
{
    int a, b, c;
    cout << "Input 3 numbers: " << endl;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;
    cout << "Number 3: ";
    cin >> c;

    int counter = 0;
    
    if ((a + b) % 2 == 0) {
        counter++;
    }
    
    if ((a + c) % 2 == 0) {
        counter++; 
    } 
    
    if ((b + c) % 2 == 0) {
        counter++;
    }
    
    int max_num = a;
    int min_num = a;

    if (b > max_num) max_num = b;
    if (c > max_num) max_num = c;

    if (b < min_num) min_num = b;
    if (c < min_num) min_num = c;
    
    cout << "Number of pairs: " << counter << endl;
    cout << "Max number: " << max_num << endl;
    cout << "Min number:" << min_num;

    return 0;
}
