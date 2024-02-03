#include <iostream>
#include <math.h>
using namespace std;

#define T 0.5
#define Z 6
#define Y T + 2 * (1 / tan(Z))
#define X (3 * pow(Y,2)) / (4 * tan(Z) - 2 * pow(T,2))

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Задание 1. Вычислить значение функции:" << endl;
	cout << "Формула: x = 3y^2/ (4tgz – 2t^2) при t = 0.5; z = 6; y = t + 2ctgz" << endl;
	cout << "x = " << X;
	return 0;
}