#include<iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	int i = 0;
	char key; // переменная будет хранить код клавиши
	do
	{
		key = _getch();
		if (key == 'w') cout << "W" << " Вы идёте вперёд." << endl;
		else if (key == 's')cout << "S" << " Вы идёте назад." << endl;
		else if (key == 'a')cout << "A" << " Вы идёте налево." << endl;
		else if (key == 'd')cout << "D" << " Вы идёте направо." << endl;
		else if (key == 32) cout << "SPACE" << " Вы прыгнули." << endl;
		else if (key == 101)cout << "E" << " Вы взаимодействуете с предметом." << endl;
		else if (key == 114)cout << "R" << " Вы перезаряжаетесь." << endl;
		else if (key == 49) cout << "1" << " Вы переключились на основное оружие." << endl;
		else if (key == 50) cout << "2" << " Вы переключились на пистолет." << endl;
		}
		else if (key == 51) {
			cout << "3" << " Вы переключились на нож." << endl;
		}
		else if (key == 52) {
			cout << "4" << " Вы переключились на гранату." << endl;
		}
		else if (key == 53) {
			cout << "5" << " Вы переключились на бомбу." << endl;
		}
		else if (key == 113) {
			cout << "Q" << " Вы сменили оружие." << endl;
		}
		else if (key == 121) {
			cout << "Y" << " Вы открыли общий чат." << endl;
		}
		else if (key == 103) {
			cout << "G" << " Вы выбросили оружие." << endl;
		}
		else if (key == 102) {
			cout << "F" << " Вы осмотрели оружие." << endl;
		}
		else if (key == 9) {
			cout << "Tab" << " Вы посмотрели список игроков." << endl;
		}
		else if (key == 13) {
			cout << "Enter" << " Вы выстрелили." << endl;
		}
	} while (key != 27);
}