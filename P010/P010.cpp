// P010.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    int r1, r2, r3, r4, r5;
    std::string personajes[10] = { "Jinx", "Caitlyn", "Vi", "Jayce", "Vander", "Viktor", "Ekko", "Mel", "Silco" };

    std::cout << "Bienvenido al juego de adivina quien version personajes de Arcane" << std::endl;
    std::cout << "Para seleccionar las opciones selecciona 1 si la respuesta es si y 2 si es no" << std::endl;
    std::cout << "Elige entre: " << std::endl;

    for (int i = 0; i < 10; i++)
    {
        Sleep(500);
        std::cout << personajes[i] << std::endl;
    }

    std::cout << "Comencemos" << std::endl;
    std::cout << "Tu personaje es mujer?" << std::endl;
    std::cin >> r1;
    if (r1 == 1)
    {
        std::cout << "Tu personaje usa algun arma de fuego?" << std::endl;
        std::cin >> r2;
        if (r2 == 1)
        {
            std::cout << "Tu personaje tiene el pelo negro?" << std::endl;
            std::cin >> r3;
            if (r3 == 1)
            {
                std::cout << "Tu personaje es Caitlyn" << std::endl;
            }
            if (r3 == 2)
            {
                std::cout << "Tu personaje tiene una hermana?" << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje es Jinx" << std::endl;
                }
                if (r4 == 2)
                {
                    std::cout << "No mientas, es Jinx" << std::endl;
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            else
            {
                std::cout << "Opcion ingresada no valida" << std::endl;
            }
        }
        if (r2 == 2)
        {
            std::cout << "Tu personaje pelea?" << std::endl;
            std::cin >> r3;
            if (r3 == 1)
            {
                std::cout << "Tu personaje tiene el pelo rosa?" << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje es Vi" << std::endl;
                }
                if (r4 == 2)
                {
                    std::cout << "No mientas, es Vi" << std::endl;
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            if (r3 == 2)
            {
                std::cout << "Tu personaje tiene el pelo cafe?" << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje es Mel" << std::endl;
                }
                if (r4 == 2)
                {
                    std::cout << "No mientas, es Mel" << std::endl;
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            else
            {
                std::cout << "Opcion ingresada no valida" << std::endl;
            }

        }
        else
        {
            std::cout << "Opcion ingresada no valida" << std::endl;
        }
    }
    if (r1 == 2)
    {
        std::cout << "Tu personaje pelea?" << std::endl;
        std::cin >> r2;
        if (r2 == 1)
        {
            std::cout << "Tu personaje tiene el pelo cafe?" << std::endl;
            std::cin >> r3;
            if (r3 == 1)
            {
                std::cout << "Tu personaje usa un martillo como arma? " << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje es Jayce" << std::endl;
                }
                if (r4 == 2)
                {
                    std::cout << "Tu personaje usa sus punos como arma?" << std::endl;
                    std::cin >> r5;
                    if (r5 == 1)
                    {
                        std::cout << "Tu personaje es Vander" << std::endl;
                    }
                    if (r5 == 2)
                    {
                        std::cout << "No mientas, es Vander" << std::endl;
                    }
                    else
                    {
                        std::cout << "Opcion ingresada no valida" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            if (r3 == 2)
            {
                std::cout << "Tu personaje forma parte de los firelights?? " << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje tiene el pelo blanco? " << std::endl;
                    std::cin >> r5;
                    if (r5 == 1)
                    {
                        std::cout << "Tu personaje es Ekko" << std::endl;
                    }
                    if (r5 == 2)
                    {
                        std::cout << "No mientas, es Ekko" << std::endl;
                    }
                    else
                    {
                        std::cout << "Opcion ingresada no valida" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            else
            {
                std::cout << "Opcion ingresada no valida" << std::endl;
            }
        }
        if (r2 == 2)
        {
            std::cout << "Tu personaje es un cientifico? " << std::endl;
            std::cin >> r3;
            if (r3 == 1)
            {
                std::cout << "Tu personaje mezclo el brillo con el hextech? " << std::endl;
                std::cin >> r4;
                if (r4 == 1)
                {
                    std::cout << "Tu personaje es Viktor" << std::endl;
                }
                if (r4 == 2)
                {
                    std::cout << "No mientas, es Viktor" << std::endl;
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
                if (r3 == 2)
                {
                    std::cout << "Tu personaje utiliza el brillo en la gente? " << std::endl;
                    std::cin >> r4;
                    if (r4 == 1)
                    {
                        std::cout << "Tu personaje es Silco" << std::endl;
                    }
                    if (r4 == 2)
                    {
                        std::cout << "No mientas, es Silco" << std::endl;
                    }
                    else
                    {
                        std::cout << "Opcion ingresada no valida" << std::endl;
                    }
                }
                else
                {
                    std::cout << "Opcion ingresada no valida" << std::endl;
                }
            }
            else
            {
                std::cout << "Opcion ingresada no valida" << std::endl;
            }
        }
        else
        {
            std::cout << "Opcion ingresada no valida" << std::endl;
        }
    }
    else
    {
        std::cout << "Opcion ingresada no valida" << std::endl;
    }
}