#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int hour1, hour2, min1, min2, sec1, sec2, time1, time2;

	cout << "Введите первое время (часы, минуты, секунды)" << endl;
	cin >> hour1 >> min1 >> sec1;
	cout << "Введите второе время (часы, минуты, секунды)" << endl;
	cin >> hour2 >> min2 >> sec2;

	time1 = (hour1 * 60 * 60) + (min1 * 60) + sec1;
	time2 = (hour2 * 60 * 60) + (min2 * 60) + sec2;

	time2 = time1 - time2;
	hour1 = time2 / (60 * 60);

	time2 = time2 - (hour1 * 60 * 60);
	min1 = time2 / 60;

	sec1 = time2 - min1 * 60;

	cout << abs(hour1) << " " << abs(min1) << " " << abs(sec1);

	return 0;
}

