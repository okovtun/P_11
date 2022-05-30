//ControlStructures
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	/*int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;
	}
	else
	{
		cout << "На улице холодно" << endl;
	}*/

	//Пользователь вводит число. Если введенное число попадает в диапазон от 0 до 10,
	//программа выводит - "Цель поражена", в противном случае - "Вы промахнулись".
	/*int number;
	cout << "Введите число: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "Вы попали" << endl;
	}
	else
	{
		cout << "Вы промахнулись" << endl;
	}*/

	int temperature;
	cout << "Введите температуру воздуха: "; cin >> temperature;

	if (temperature > 60)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 40)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 30)
	{
		cout << "Жарко" << endl;
	}
	else if (temperature > 20)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 10)
	{
		cout << "Прохладно" << endl;
	}
	else if(temperature > 0)
	{
		cout << "На улице холодно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Сильный мороз" << endl;
	}
	else if (temperature > -50)
	{
		cout << "Вы на серверном полюсе" << endl;
	}
	else
	{
		cout << "Вы на другой планете" << endl;
	}
}