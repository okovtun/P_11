#include<iostream>
#include<Windows.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define FOR_BASICS
//#define FACTORIAL
//#define POWER
//#define ASCII

void main()
{
	setlocale(LC_ALL, "");
#ifdef FOR_BASICS
	int n = 5;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // FOR_BASICS

#ifdef FACTORIAL
	int n;	//Число, для которого нужно вычислить Факториал
	cout << "Введите число для вычисления факториала: "; cin >> n;
	double factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		factorial *= i;
		cout << factorial << endl;
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;		//Основание степени
	int n;			//Показатель степени
	double N = 1;	//Степень
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	cout << a << " ^ " << n << " = ";
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POWER

#ifdef ASCII
	cout << "Таблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Вот и сказочке конец!" << endl;
#endif // ASCII

	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << i << "\t" << j << endl;
		}
	}*/
	for (int h = 0; h < 24; h++)
	{
		for (int m = 0; m < 60; m++)
		{
			for (int s = 0; s < 60; s++)
			{
				cout << h << ":" << m << ":" << s << endl;
				Sleep(100);
				system("CLS");
				//Функция Sleep() приостанавливает выполнение программы на заданное количество миллисекунд.
			}
		}
	}
}