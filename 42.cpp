#include <iostream>
using namespace std;

int main()
{
    // задача: площа ромба
    // декларація змінних
    double d1, d2, S;

    // введення змінних
    cout << "Enter d1: ";
    cin >> d1;
    cout << "Enter d2: ";
    cin >> d2;

    // розрахунок результату
    S = (d1 * d2) / 2;

    // вивід результату
    cout << "Area: " << S << endl;

    return 0;
}
