// TelefonoNegroAdaptacion.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int main()
{   
    std::string texto[19];
    std::string Inicio = "El telefono negro-Una adaptacion de la antologia de cuentos de terror Fantasmas de Joe Hill-Presiona a o b para continuar";
    texto[0] = Inicio;

    for (int i = 0; i < texto[0].size(); i++)
    {
        if (texto[0][i] == '-')
        {   
            std::cout << std::endl;
        }
        else
        {
            std::cout << texto[0][i];
        }
    }
}

