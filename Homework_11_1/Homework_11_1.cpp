#include <iostream>
#include <Windows.h>
#include "Greeter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input = " ";
    std::cout << "Введите имя: ";
    std::cin >> input;
    Greeter g;
    std::cout << g.greet(input) << std::endl;
}