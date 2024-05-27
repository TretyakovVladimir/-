#include <iostream>

struct adress
{
	std::string Streat;
	std::string City;
	short housenumber;
	short number_appartament;
	int postalcode;
};

void print(adress& adress)
{
	std::cout << "Город: " << adress.City << std::endl;
	std::cout << "Улица: " << adress.Streat << std::endl;
	std::cout << "Дом: " << adress.housenumber << std::endl;
	std::cout << "Квартира: " << adress.number_appartament << std::endl;
	std::cout << "Индекс: " << adress.postalcode << std::endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	struct adress adress1;
	adress1.City = "Москва";
	adress1.Streat = "Арбат";
	adress1.housenumber = 12;
	adress1.number_appartament = 8;
	adress1.postalcode = 123456;
	struct adress adress2;
	adress2.City = "Ижевск";
	adress2.Streat = "Пушкино";
	adress2.housenumber = 59;
	adress2.number_appartament = 143;
	adress2.postalcode = 953769;
	print(adress1);
	std::cout << std::endl;
	print(adress2);
	return 0;
}