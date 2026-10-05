#include <iostream> 
using namespace std;


int main()
{
    int a;
    
    cout << "Input number (1 to 4): ";
    cin >> a;
    
    switch (a) {
        case 1:
            cout << "Winter";
            break;
        case 2:
            cout << "Spring";
            break;
        case 3:
            cout << "Summer";
            break;
        case 4:
            cout << "Autumn";
            break;
        default:
            cout << "This season does not exist";
    }

    return 0;
}