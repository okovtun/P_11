//ControlStructures
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	/*int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else
	{
		cout << "�� ����� �������" << endl;
	}*/

	//������������ ������ �����. ���� ��������� ����� �������� � �������� �� 0 �� 10,
	//��������� ������� - "���� ��������", � ��������� ������ - "�� ������������".
	/*int number;
	cout << "������� �����: "; cin >> number;
	if (number >= 0 && number <= 10)
	{
		cout << "�� ������" << endl;
	}
	else
	{
		cout << "�� ������������" << endl;
	}*/

	int temperature;
	cout << "������� ����������� �������: "; cin >> temperature;

	if (temperature > 60)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 40)
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperature > 30)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 20)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 10)
	{
		cout << "���������" << endl;
	}
	else if(temperature > 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else if (temperature > -10)
	{
		cout << "�����" << endl;
	}
	else if (temperature > -20)
	{
		cout << "������� �����" << endl;
	}
	else if (temperature > -50)
	{
		cout << "�� �� ��������� ������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������" << endl;
	}
}