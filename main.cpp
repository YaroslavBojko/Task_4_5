#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "Введите первое число: ";
	cin >> firstNumber;
	int secondNumber;
	cout << "Введите второе число: ";
	cin >> secondNumber;
	cout << "-----Проверяем-----" << endl;

	if (firstNumber % secondNumber == 0)
	{
		cout << "Да, " << firstNumber << " делится на " << secondNumber << " без остатка!" << endl;
	}
}