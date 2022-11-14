// 2022_10_24_000_Practica8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::string titles[3];
    int year[3];
    std::string autor[3];

    for (int i = 0; i < 3; i++)
    {   
        std::cout << "Libro numero " << i + 1 << std::endl;
        std::cout << "Ingresa el nombre del libro" << std::endl;
        std::getline(std::cin, titles[i]);
        std::cout << "Ingresa el año del libro" << std::endl;
        std::cin >> year[i];
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

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
