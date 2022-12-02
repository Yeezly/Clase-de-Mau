// P011.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::string titles[3];
    std::string year[3];
    std::string autor[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Libro numero " << i + 1 << std::endl;
        std::cout << "Ingresa el nombre del libro" << std::endl;
        std::getline(std::cin, titles[i]);
        std::cout << "Ingresa el año del libro" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, year[i]);
        std::cout << "Ingresa el autor del libro" << std::endl;
        std::cin.ignore();
        std::getline(std::cin, autor[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "----------------------------- " << std::endl;
        std::cout << "Libro numero " << i + 1 << std::endl;
        std::cout << "Nombre del libro:" << std::endl;
        std::cout << titles[i] << std::endl;
        std::cout << "Año del libro:" << std::endl;
        std::cout << year[i] << std::endl;
        std::cout << "Autor del libro:" << std::endl;
        std::cout << autor[i] << std::endl;
    }
}
