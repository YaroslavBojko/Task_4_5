#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int firstNumber;
	cout << "������� ������ �����: ";
	cin >> firstNumber;
	int secondNumber;
	cout << "������� ������ �����: ";
	cin >> secondNumber;
	cout << "-----���������-----" << endl;

	if (firstNumber % secondNumber == 0)
	{
		cout << "��, " << firstNumber << " ������� �� " << secondNumber << " ��� �������!" << endl;
	}
}