#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double celsius, fahrenheit;

	cout << "Введите температуру в Фаренгейтах" << endl;
	cin >> fahrenheit;

	celsius = (5.0 / 9) * (fahrenheit - 32);

	cout << "Температура в грудсах по Цельсию: " << celsius;

	return 0;
}
