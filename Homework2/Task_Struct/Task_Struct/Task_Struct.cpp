#include <iostream>

struct person
{
	int Number;
	std::string Name;
	float Ballance;
};

void new_ballance(person& p)
{
	std::cout << "Введите новый баланс: ";
	std::cin >> p.Ballance;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "rus");
	person p;
	std::cout << "Введите свои персональные данные\n";
	std::cout << "Ваш номер счета: ";
	std::cin >> p.Number;
	std::cout << "Ваше Имя: ";
	std::cin >> p.Name;
	std::cout << "Ваш баланс: ";
	std::cin >> p.Ballance;
	new_ballance(p);
	std::cout << "Вас счет: " << p.Name << ", " << p.Number << ", " << p.Ballance;
	return 0;
}