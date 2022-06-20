#include <iostream>

// #define HM1
// #define HM2 
 //#define HM3
 #define HM4


int main()
{
	setlocale(LC_ALL, "Rus");
#ifdef HM1
	for (int j = 2; j <= 10; j++)
	{
		for (int i = 2; i <= 10; i++)
		{
			std::cout << i << "x" << j << "=" << i * j << "\t";
		}
		std::cout << std::endl;
	}
#endif

#ifdef HM2

	for (int j = 1; j <= 10; j++)
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << j * i << "\t";
		}
		std::cout << std::endl;
	}

#endif  

#ifdef HM3
	int count = 1;
	long long num = 2;
	std::cout << "¬ведите кол-во простых чисел: "; std::cin >> count;

	for (int i = 0; i <= count;)
	{
		if ((num * num) % 24 == 1) { std::cout << i << ": " << num << "\n"; i++; }
		num++;

	}

#endif // HM3

#ifdef HM4
	long double num = 0;
	long double temp = 0;
	long double tmp = 1;

	int count = 1;
	std::cout << "—колько вывести чисел ‘ибоначчи: -> "; std::cin >> count;

	for (int i = 0; i <= count; i++)
	{
		std::cout << i << ": " << num << std::endl;
		temp = tmp + num;
		num = tmp;
		tmp = temp;
	}
#endif // HM4
}