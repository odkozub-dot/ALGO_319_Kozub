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
