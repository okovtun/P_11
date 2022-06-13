#include<iostream>
using namespace std;

//#define FOR_BASICS
//#define FACTORIAL

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


}