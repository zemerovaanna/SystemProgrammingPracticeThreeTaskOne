#include <iostream>
#include <math.h>
using namespace std;

#define t 0.5
#define z 6
#define y t + 2 * (1 / tan(z))
#define x (3 * pow(y, 2)) / (4 * tan(z)) - 2 * pow(t, 2)

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание 1: Вычислить значение функции." << endl;
    cout << "Формула: x = 3y^2/ (4tgz – 2t^2) при t = 0.5; z = 6; y = t + 2ctgz ." << endl;
    cout << "x = " << x << endl;
    return 0;
}
