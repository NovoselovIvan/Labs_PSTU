#include <iostream>	
#include <clocale>

using namespace std; 

int main() {	
	setlocale(LC_ALL, "Russian");	
	float k, x;	
	
	cout << "Введите два числа" << endl;	
	cin >> k >> x;	
	cout << "Их произведение равно " << k * x;
	
	return 0;
}
