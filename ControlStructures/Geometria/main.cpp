#include<iostream>
using namespace std;

//#define SQUARE

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)//этот цикл повторяет вывод строки на экран, и таким образом мыполучаем квадрат
	{
		for (int i = 0; i < n; i++)//этот цикл повторяет вывод звездочки, и таким обрахзом мы получаем строку из звездочек
		{
			cout << "* ";
		}
		cout << endl;	//после вывода строки нужно перейти на новую строку.
	}
#endif // SQUARE

	//		Start ; Stop ;	Step
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}