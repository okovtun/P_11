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
	int n;		//���������� ��������
	int i = 0;	//������� �����
	cout << "������� ���������� ��������: ";
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
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World!" << endl;
	}
#endif // WHILE_2

#ifdef DO_WHILE
	char key;	//��� ���������� ����� ������� ��� �������
	do
	{
		key = _getch();	//������� _getch() ������� ������� �������,
		//� ���������� ASCII-��� ������� �������.
		//������� _getch() ��������� � ���������� conio.h
		cout << (int)key << "\t" << key << endl;
		//(int)key - ����� �������������� ���������� key � ��� ������ int
	} while (key != Escape);
#endif // DO_WHILE



}

//FOR - ��� ���� �� �������� ����� ��������
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