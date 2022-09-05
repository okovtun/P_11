#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	//Too few arguments in function call, если передать меньше параметров, чем она принимает.
	//Too many arguments in function call, если передать в нее больше параметров, чем она принимает.
	//Function doesn't take N arguments

	//Default arguments
}

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100)
{
	//«аполн€ем массив случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	//¬ывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	//—ортировка массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}