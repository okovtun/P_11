#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

/*
--------------------------------------------
		Unresolved externals
LNK
--------------------------------------------
*/

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	int minRand = 100, maxRand = 200;
	//cout << "������� ����������� ��������� �����: "; cin >> minRand;
	//cout << "������� ������������ ��������� �����: "; cin >> maxRand;


	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << endl;

	/*int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);*/

	//-------------------------------------------------------------------
	cout << "double:\n" << endl;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;

	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "\n2D:\n";
	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	//Too few arguments in function call, ���� �������� ������ ����������, ��� ��� ���������.
	//Too many arguments in function call, ���� �������� � ��� ������ ����������, ��� ��� ���������.
	//Function doesn't take N arguments

	//Default arguments
}