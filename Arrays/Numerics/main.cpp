#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 32;	//����������� ��������� ����������� ��������� �����
	bool bin[n] = {};	//� ���� ������ ����� ��������� ������� ��������� �����
	int decimal;		//���������� �����, ��������� �������������
	cout << "������� ���������� �����: "; cin >> decimal;
	int i = 0;	//����� ������� (����� �������� �������)
	/*while (decimal)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;
	}*/
	for (; decimal; i++,decimal /= 2)
	{
		bin[i] = decimal % 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
}