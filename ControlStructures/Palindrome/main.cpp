#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;		//Число, вводимое с клавиатуры
	int reverse = 0;//Число, записанное задом наперед
	cout << "Введите число: "; cin >> number;
	int buffer = number;	//Создаем копию числа, введенного с клавиатуры,
	//поскольку это число будет изменяться в процессе поиска палиндрома,
	//а введенное число должно истаться неизменным.
	while (buffer > 0)
	{
		reverse *= 10;
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;

}