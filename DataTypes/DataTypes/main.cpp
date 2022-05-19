//DataTypes
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	//cout << "Привет!" << endl;
	//cout << true << endl;
	//cout << false << endl;

	/*cout << sizeof(int) << endl;
	cout << INT_MIN << "\t" << INT_MAX << endl;
	cout << 0 << "\t" << UINT_MAX << endl;*/

	//float	 - вещественное число одинарной точности, 4B
	//double - вещественное число двойной точности 8B
	/*cout << sizeof(float) << endl;
	cout << FLT_MIN << " ... " << FLT_MAX << endl;
	cout << "\n----------------------\n";
	cout << sizeof(double) << endl;
	cout << DBL_MIN << " ... " << DBL_MAX << endl;*/

	/*int _1stPlace;
	int Price;
	cout << price << endl;*/

	int speed;	//переменное значение
	//проинициализировать
	cout << "Введите текущую скорость: ";
	cin >> speed;	//Ввод значения переменной с клавиатуры
	//инициалиализация - это присвоение начального значения.
	cout << "Ваша скорость: " << speed << " км/час" << endl;
	const int MAX_SPEED = 250;//постоянное (константное) значение
	//max_speed = 360;
	5;	//числовая константа типа int
	5l;	//числовая константа типа long
	5ll;//числовая константа типа long long 
	5.;	//числовая константа типа double
	.5;	//числовая константа типа double
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