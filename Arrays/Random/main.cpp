#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (maxRand <= minRand)
		{

		}
	} while (maxRand <= minRand);
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		//������� rand() ���������� ��������������� ����� 
		//� ��������� �� 0 �� 32767 (RAND_MAX)
	}
	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� �������:


	//����� ���������������� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}