#include <iostream>
enum month { Январь = 1, Февраль, Март, Апрель, Май, Июнь, Июль, Август, Сентябрь, Октябрь, Ноябрь, Декабрь };

int main() {
    setlocale(LC_ALL, "rus");
    month month_1 = Январь;
    int a = month_1;

    do
    {
        std::cout << "\nВведите номер месяца:";
        std::cin >> a;
        switch (a)
        {
        case Январь:
            std::cout << "Январь - 31 день";
            break;
        case Февраль:
            std::cout << "Февраль - 28 дней";
            break;
        case Март:
            std::cout << "Март - 31 день";
            break;
        case Апрель:
            std::cout << "Апрель - 30 дней";
            break;
        case Май:
            std::cout << "Май - 31 день";
            break;
        case Июль:
            std::cout << "Июль - 31 день";
            break;
        case Июнь:
            std::cout << "Июнь - 30 дней";
            break;
        case Август:
            std::cout << "Август - 31 день";
            break;
        case Сентябрь:
            std::cout << "Сентябрь - 30 дней";
            break;
        case Октябрь:
            std::cout << "Октябрь - 31 день";
            break;
        case Ноябрь:
            std::cout << "Ноябрь - 30 дней";
            break;
        case Декабрь:
            std::cout << "Декабрь - 31 день";
            break;
        }
    } while (a != 0);
    std::cout << "Досвидания!";
    return 0;
}