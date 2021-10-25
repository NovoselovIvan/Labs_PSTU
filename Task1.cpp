#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int X, digit1, digit2, digit3;

    cout << "Введите трехзначное число:" << endl;
    cin >> X;

    while ((X < 100) || (X > 999)) {
        cout << "Введенное число не является трехзначным" << endl << "Повторите ввод" << endl;
        cin >> X;
    }

    digit1 = X / 100;
    digit2 = (X / 10) % 10;
    digit3 = X % 10;

    cout << "Все возможные последовательности чисел:" << endl;
    cout << digit1 << digit2 << digit3 << endl;
    cout << digit1 << digit3 << digit2 << endl;
    cout << digit2 << digit3 << digit1 << endl;
    cout << digit2 << digit1 << digit3 << endl;
    cout << digit3 << digit2 << digit1 << endl;
    cout << digit3 << digit1 << digit2 << endl << endl;

    cout << "Наибольшее из этих чисел: ";
    if (digit1 > digit2) {
        if (digit2 > digit3)
            cout << digit1 << digit2 << digit3;
        else if (digit1 > digit3)
            cout << digit1 << digit3 << digit2;
        else
            cout << digit3 << digit1 << digit2;
    }
    else {
        if (digit3 > digit2)
            cout << digit3 << digit2 << digit1;
        else if (digit1 > digit3)
            cout << digit2 << digit1 << digit3;
        else
            cout << digit2 << digit3 << digit1;
    }
    return 0;
}

