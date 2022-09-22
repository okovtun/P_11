//Pointers
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define POINTERS_BASICS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTERS_BASICS
	//Pointer - это переменная, которая содержит адрес.
//Адрес - это число длиной 4 Байта, 
//означающее порядковый номер Байта в оперативной памяти.
	int a = 2;
	int* pa = &a;
	cout << a << endl;	//вывод значения переменной 'a' на экран.
	cout << &a << endl;	//взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;	//вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//разыменование указателя 'pa' и получение значения по адресу в этом указателе.

	int* pb;
	int b = 3;
	*pb = &b;
	// (int) (int*)
		//int  - 'int'
		//int* - указатель на 'int'
		//double - 'double'
		//double* - указатель на 'double'
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
#endif // POINTERS_BASICS

	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}

/*
----------------------------------------------------------
& - Address-of operator
* - Оператор разыменования (Dereference operator)
----------------------------------------------------------
*/

/*
----------------------------------------------------------
+
-
++
--
char*	1
short*	2
int*	4
double*	8
----------------------------------------------------------
*/