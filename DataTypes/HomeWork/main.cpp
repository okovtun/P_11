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

	std::cout << "�������������� ���� � �������� ������" << std::endl;
	std::cout << "������� ������� ����� -> ";
	std::cin >> price;
	price += 1e-8;
	penny = (int)((price - (int)price) * 100);
	std::cout << "\n" << price << " ���. " << "- ��� " << (int)price << " ���. " << penny << " ���.\n" << std::endl;
#endif

#if defined H2
	float price_copybook, price_pencil;
	int quantity_copybook, quantity_pencil;

	std::cout << "���������� ��������� �������." << std::endl;
	std::cout << "������� �������� ������: " << std::endl;

	std::cout << "���� ������� (���.) -> ";		std::cin >> price_copybook;
	std::cout << "���-�� �������� ->";			std::cin >> quantity_copybook;

	std::cout << "���� ��������� (���.) -> ";	std::cin >> price_pencil;
	std::cout << "���-�� ���������� ->";		std::cin >> quantity_pencil;

	std::cout << "��������� �������: " << price_copybook * quantity_copybook + price_pencil * quantity_pencil
		<< " ���." << std::endl;
#endif

#if defined H3
	float price_copybook, price_cover;
	int quantity;

	std::cout << "���������� ��������� �������." << std::endl;
	std::cout << "������� �������� ������: " << std::endl;

	std::cout << "���� ������� (���.) -> ";
	std::cin >> price_one;
	std::cout << "���� ������� (���.) -> ";
	std::cin >> price_two;
	std::cout << "���-�� ��������� (��) -> ";
	std::cin >> quantity;

	std::cout << "��������� �������: " << (price_copybook + price_cover)* quantity << " ���." << std::endl;

#endif

#if defined H4
	float distance, consumption, price;

	std::cout << "���������� ��������� ������� �� ���� � �������." << std::endl;

	std::cout << "���������� �� ���� -> ";
	std::cin >> distance;

	std::cout << "������ ������� (������ �� 100 �� �������) -> ";
	std::cin >> consumption;

	std::cout << "���� ����� ������� (���.) -> ";
	std::cin >> price;

	std::cout << "������� �� ���� � ������� ��������� � " << distance * (consumption / 100) * price * 2 << " ���." << std::endl;

#endif

}

