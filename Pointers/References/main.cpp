//References
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//reference
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << a << endl;
}