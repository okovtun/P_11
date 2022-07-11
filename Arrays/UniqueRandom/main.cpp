//UniqueRandom
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = {};
	//Заполнение массива уникальными случайными числами
	for (int i = 0; i < n; i++)
	{
		//Генерируем случайное число до тех пор, пока оно НЕ уникально
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;	//предполагаем что сгенерировалось уникальное число,
			//но это нужно проверить:
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == arr[i])
				{
					unique = false;
					break; //Ключевое слово break прерывает текущую итерацию и все последующие
				}
			}
		} while (!unique);
	}

	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}