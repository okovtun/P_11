#include<iostream>
using namespace std;

#define WHITE_BOX			"\xDB\xDB"
#define BLACK_BOX			"  "

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					/*if ((i + k) % 2 == 0)cout << "* ";
					else cout << "  ";*/
					cout << ((i + k) % 2 == 0 ? "* " : "  ");
					//cout << (i % 2 == k % 2 ? WHITE_BOX : BLACK_BOX);
				}
			}
			cout << endl;
		}
	}
}