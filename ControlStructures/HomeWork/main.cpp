#include <iostream>
using namespace std;
using std::cin;
using std::cout;
//#define Triangle1
//#define Triangle2
//#define Triangle3
//#define Triangle4
//#define Triangle5
//#define Triangle6
//#define Rombus
//#define Shahmati
#define plus_minus
#define HardChess
int n, y, a, b, o;
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef Triangle1
	cout << "������� ������: "; cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > 0; j--)
		{
			cout << "* ";
		}
		cout << endl;
	}

	cout << endl;
#endif

#ifdef Triangle2
	cout << "����� ������: "; cin >> n;
	katet = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j >= 0; j--)
		{
			if (j > n - katet)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
		katet--;
	}
#endif

#ifdef Triangle3
	cout << "������� ������ ��������������: "; cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif

#ifdef Triangle4
	cout << "������� ������ �������������� ������������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}
		cout << endl;
	}
#endif

#ifdef Triangle5
	cout << "������� ������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef Triangle6
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif

#ifdef Rombus
	cout << "������� �����: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif

#ifdef plus_minus
	cout << "���� � �����" << endl;
	cout << "������� ������ �����: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i % 2 == j % 2)
				cout << "+ ";
			else
				cout << "- ";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef HardChess
	cout << "�������� ��������� ����� �� ���������" << endl;
	cout << "����������:���-�� �������� ����� ������ �� ������ ������!!" << endl;
	cout << "������� ���-�� ���������: "; cin >> n;
	//cout << "������� ������ ������: "; cin >> y;
	n *= 5;
	y = n/8;
	//cout << "����� ������� ������ ����� ���������� (������������� �������� 1): "; cin >> o;
	o = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((j / y + i / y)&o)//& ��� ������ ������ ��� ���������� ��������� ����� ���� �������
				cout << "* ";
			else
				cout << "  ";

		}
		cout << endl;
	}
#endif
}