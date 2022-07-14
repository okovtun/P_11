#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 32;	//максимально возможная разрядность двоичного числа
	bool bin[n] = {};	//в этот массив будем сохранять разряды двоичного числа
	int decimal;		//десятичное число, введенное пользователем
	cout << "Введите десятичное число: "; cin >> decimal;
	int i = 0;	//номер разряда (номер элемента массива)
	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;
	}*/
	for (; decimal; i++,decimal /= 2)
	{
		bin[i] = decimal % 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}