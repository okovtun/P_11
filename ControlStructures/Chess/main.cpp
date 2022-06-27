#include<iostream>
using namespace std;

#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORIZ_LINE			(char)196
#define VERT_LINE			(char)179
#define WHITE_BOX			(char)219

void main()
{
	for (int i = 176; i < 224; i++)
	{
		cout << i << "\t" << (char)i << endl;
	}

	int n;
	setlocale(LC_ALL, "");
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZ_LINE << HORIZ_LINE;
			else if (j == 0 || j == n)cout << VERT_LINE;
			else cout << "  ";
		}
		cout << endl;
	}
}