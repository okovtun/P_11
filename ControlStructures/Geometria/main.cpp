#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
#define TRIANGLE_3
#define TRIANGLE_4

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

#ifdef TRIANGLE_1
	//		Start ; Stop ;	Step
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

	//PascalCaseStyle
	//pascalCaseStyle
	//CamelCaseStyle
	//BigCammel
	//smallCammel
	//snake_case_style

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
}