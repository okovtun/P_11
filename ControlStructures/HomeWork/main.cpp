#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
#define Triangle1
#define Triangle2
#define Triangle3
#define Triangle4
int n;
int x, katet;
void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef Triangle1
	cout << "������� ������: "; cin >> n;

	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
#endif
#ifdef Triangle2
	cout << "����� ������: "; cin >> x;
	katet = x;
	for (int i = 0; i < x; i++)
	{
		for (int j = x; j >= 0; j--)
		{
			if (j > x - katet)
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
}
/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Triangle1
*
* *
* * *
* * * *
* * * * *

Triangle2
* * * * *
* * * *
* * *
* *
*

Triangle3
* * * * *
  * * * *
	* * *
	  * *
		*

Triangle4
		*
	  * *
	* * *
  * * * *
* * * * *

Rombus
	/\
   /  \
  /    \
 /      \
/        \
\        /
 \      /
  \    /
   \  /
	\/

+ - + - +
- + - + -
+ - + - +
- + - + -
+ - + - +
*/