#include<iostream>
using namespace std;

//#define ARITHMETICAL_OPERATORS//1) Арифметические операторы
//#define ASSIGNMENT_OPERATOR	//2) Оператор присваивания
//#define INCREMENT_DECREMENT	//3) Increment/Decrement (++/--)
//#define COMPOUND_ASSIGNMENTS	//4) Составные присваивания
#define COMPARISON_OPERATORS	//5) Операторы сравнения

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARITHMETICAL_OPERATORS
	//Unary:	+ -
//Binary:	+ - * / %
// % - остаток от деления
	cout << 17 / 3 << endl;
	cout << 17 % .3 << endl;
	cout << 3 % 17 << endl;
#endif // ARITHMETICAL_OPERATORS

#ifdef ASSIGNMENT_OPERATOR
	//	l-value = r-value;
//Оператор = переменной слева (l-value)
//(r-value)
//Присвоить значит записать, сохранить в память, запомнить, дать значение.
//r-value состоит из одной переменной или константы.
/*int a = 2;
int b = 3 + a * 4 - 5;
a = 8;*/

	int a, b, c;

	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	//Increment (++) - это унарный оператор, который увеличивает значение переменной на 1.
	//Decrement (--) - это унарный оператор, который уменьшает значение переменной на 1.
	int i = 0;
	++i;	//Prefix increment
	i++;	//Postfix increment
	--i;	//Prefix decrement
	i--;	//Postfix (Suffix) decrement
#endif // INCREMENT_DECREMENT

#ifdef COMPOUND_ASSIGNMENTS
			//	+=, -=, *=, /=, %=
	int a = 2;
	int b = 3;

	a = a + b;		a += b;
	a = a - b;		a -= b;
	a = a * b;		a *= b;
	a = a / b;		a /= b;
	a = a % b;		a %= b;
	// +  оператор "сложить"
	// -  оператор "вычесть"
	// += оператор "прибавить"
	// -= оператор "отнять"  
#endif // COMPOUND_ASSIGNMENTS

	cout << (!true == false) << endl;
}