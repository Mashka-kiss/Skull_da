#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string slovo;
    std::cout << "Введите слово: ";
    std::cin >> slovo;
    reverse(slovo.begin(), slovo.end());
    std::cout << "Результат: " + slovo << std::endl;
}
