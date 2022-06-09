#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27

//#define WHILE_1
//#define WHILE_2
//#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n;		//Количество итераций
	int i = 0;	//Счетчик цикла
	cout << "Введите количество итераций: ";
	cin >> n;
	while (i < n)
	{
		cout << ++i << " Hello loops";
		cout << 1024 << endl;
		//i++;
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n;
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World!" << endl;
	}
#endif // WHILE_2

#ifdef DO_WHILE
	char key;	//Эта переменная будет хранить код клавиши
	do
	{
		key = _getch();	//Функция _getch() ожидает нажатие клавиши,
		//и возвращает ASCII-код нажатой клавиши.
		//Функция _getch() находится в библиотеке conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - явное преобразование переменной key в тип данных int
	} while (key != Escape);
#endif // DO_WHILE



}

//FOR - это цикл на заданное число итераций
/*
---------------------------------------------------
		for(counter; condition; expression)
		{
			....;
			group-of-statements;
			....;
		}
---------------------------------------------------
*/