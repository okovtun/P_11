#include<iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int i = 0;
	char key; // ���������� ����� ������� ��� �������
	do
	{
		key = _getch();
		if (key == 'w') cout << "W" << " �� ���� �����." << endl;
		else if (key == 's')cout << "S" << " �� ���� �����." << endl;
		else if (key == 'a')cout << "A" << " �� ���� ������." << endl;
		else if (key == 'd')cout << "D" << " �� ���� �������." << endl;
		else if (key == 32) cout << "SPACE" << " �� ��������." << endl;
		else if (key == 101)cout << "E" << " �� ���������������� � ���������." << endl;
		else if (key == 114)cout << "R" << " �� ���������������." << endl;
		else if (key == 49) cout << "1" << " �� ������������� �� �������� ������." << endl;
		else if (key == 50) cout << "2" << " �� ������������� �� ��������." << endl;
		}
		else if (key == 51) {
			cout << "3" << " �� ������������� �� ���." << endl;
		}
		else if (key == 52) {
			cout << "4" << " �� ������������� �� �������." << endl;
		}
		else if (key == 53) {
			cout << "5" << " �� ������������� �� �����." << endl;
		}
		else if (key == 113) {
			cout << "Q" << " �� ������� ������." << endl;
		}
		else if (key == 121) {
			cout << "Y" << " �� ������� ����� ���." << endl;
		}
		else if (key == 103) {
			cout << "G" << " �� ��������� ������." << endl;
		}
		else if (key == 102) {
			cout << "F" << " �� ��������� ������." << endl;
		}
		else if (key == 9) {
			cout << "Tab" << " �� ���������� ������ �������." << endl;
		}
		else if (key == 13) {
			cout << "Enter" << " �� ����������." << endl;
		}
	} while (key != 27);
}