//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "������!" << endl;
	//cout << true << endl;
	//cout << false << endl;

	/*cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;
	cout << 0 << "\t" << UINT_MAX << endl;*/

	//float	 - ������������ ����� ��������� ��������, 4B
	//double - ������������ ����� ������� �������� 8B
	/*cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n----------------------\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;*/

	/*int _1stPlace;
	int Price;
	cout << price << endl;*/

	int speed;	//���������� ��������
	//�������������������
	cout << "������� ������� ��������: ";
	cin >> speed;	//���� �������� ���������� � ����������
	//���������������� - ��� ���������� ���������� ��������.
	cout << "���� ��������: " << speed << " ��/���" << endl;
	const int MAX_SPEED = 250;//���������� (�����������) ��������
	//max_speed = 360;
	5;	//�������� ��������� ���� int
	5l;	//�������� ��������� ���� long
	5ll;//�������� ��������� ���� long long 
	5.;	//�������� ��������� ���� double
	.5;	//�������� ��������� ���� double
	cout << sizeof(5.f) << endl;
	cout << typeid(5.f).name() << endl;
	cout << typeid(.5f).name() << endl;
	cout << .5 << endl;
	//http://cplusplus.com/doc/tutorial/constants/

	cout << '+' << endl;
	cout << sizeof('+') << endl;
	cout << typeid('+').name() << endl;

	cout << "Hello" << endl;
	cout << sizeof("Hello") << endl;

	3;
	-3;		//Unary minus
	8 - 3;	//Binary minus
	8 * 3;	//Binary multiply
	//*3;//Have no sence
}