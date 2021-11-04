#include <iostream>
#include <clocale>

using namespace std; 

int main() {	
	setlocale(LC_ALL, "Russian");	
	float gallon;	
	
	cout << "Введите количество галлонов" << endl;	
	cin >> gallon;	
	cout << "Объём в кубических футах равен " << gallon / 7.481;	
	
	return 0;
}
