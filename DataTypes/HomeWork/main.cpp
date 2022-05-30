#include <iostream>


//#define H1
#define H2
//#define H3
//#define H4

int main()
{
	setlocale(LC_ALL, "Rus");

#if defined H1
	double price;
	int penny;

	std::cout << "Преоброзование чила в денежный формат" << std::endl;
	std::cout << "Введите дробное число -> ";
	std::cin >> price;
	price += 1e-8;
	penny = (int)((price - (int)price) * 100);
	std::cout << "\n" << price << " грн. " << "- это " << (int)price << " грн. " << penny << " коп.\n" << std::endl;
#endif

#if defined H2
	float price_copybook, price_pencil;
	int quantity_copybook, quantity_pencil;

	std::cout << "Вычесление стоимости покупки." << std::endl;
	std::cout << "Введиет исходные данные: " << std::endl;

	std::cout << "Цена тетради (грн.) -> ";		std::cin >> price_copybook;
	std::cout << "Кол-во тетрадей ->";			std::cin >> quantity_copybook;

	std::cout << "Цена карандаша (грн.) -> ";	std::cin >> price_pencil;
	std::cout << "Кол-во карандашей ->";		std::cin >> quantity_pencil;

	std::cout << "Стоимость покупки: " << price_copybook * quantity_copybook + price_pencil * quantity_pencil
		<< " грн." << std::endl;
#endif

#if defined H3
	float price_copybook, price_cover;
	int quantity;

	std::cout << "Вычесление стоимости покупки." << std::endl;
	std::cout << "Введиет исходные данные: " << std::endl;

	std::cout << "Цена тетради (грн.) -> ";
	std::cin >> price_one;
	std::cout << "Цена обложки (грн.) -> ";
	std::cin >> price_two;
	std::cout << "Кол-во комлектов (шт) -> ";
	std::cin >> quantity;

	std::cout << "Стоимость покупки: " << (price_copybook + price_cover)* quantity << " грн." << std::endl;

#endif

#if defined H4
	float distance, consumption, price;

	std::cout << "Вычесление стоимости поездки на дачу и обратно." << std::endl;

	std::cout << "Расстояние до дачи -> ";
	std::cin >> distance;

	std::cout << "Расход бензина (литров на 100 км пробега) -> ";
	std::cin >> consumption;

	std::cout << "Цена литра бензина (грн.) -> ";
	std::cin >> price;

	std::cout << "Поездка на дачу о обратно обойдется в " << distance * (consumption / 100) * price * 2 << " грн." << std::endl;

#endif

}

