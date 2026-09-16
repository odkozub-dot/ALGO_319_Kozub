#include <iostream>
using namespace std;

int main()
{
    // задача Begin32
    // декларація змінних
    double R, D, S;
    const double PI = 3.14;

    // введення змінної
    cout << "Enter R: ";
    cin >> R;

    // розрахунок результатів
    D = 2 * R;
    S = (PI * R * R) / 4;

    // вивід результатів
    cout << "Diameter D = " << D << endl;
    cout << "Sector area S = " << S << endl;

    return 0;
}
