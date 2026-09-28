//32.cpp
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
//43.cpp
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
//5.cpp
#include <iostream>
using namespace std;

int main()
{
    // задача знайти площу та об'єм куба
    // декларація змінних
    double a, V, S;

    // введення змінних
    cout << "Enter a: ";
    cin >> a;
 
    // розрахунок результату
    S = 6 * a * a; 
    V = a * a * a;

    // вивід результату
cout << "area: " << S << ", volume: " << V << endl;
    
    return 0;
}