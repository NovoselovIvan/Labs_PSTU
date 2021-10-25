#include <iostream>
#include <clocale>
#include <ctime>

using namespace std;

int random(int a, int b)
{
	srand(time(NULL));
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int attempt;
	int number = random(1, 100);
	cout << "Попробуйте угадать число. У вас 7 попыток:" << endl;
	for (int i = 1; i <= 7; i++) {
		cout << i << "-я попытка" << endl;
		cin >> attempt;
		if (number != attempt) {
			if (attempt > number)
				cout << "Нужно число меньше, чем " << attempt << endl;
			else
				cout << "Нужно число больше, чем " << attempt << endl;
		}
		else {
			cout << "Вы отгадали число " << attempt << endl;
			return 0;
		}
	}
	cout << "Вы не отгадали число" << endl << "Число:" << number;
	return 0;
}
