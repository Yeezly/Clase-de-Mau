// P017.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>

int f_potencia(int base, int exponente)
{
    if (exponente == 1) 
    {
        std::cout << base << std::endl;
    }
    if (exponente == 0)
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        return (pow(base, exponente));
    }
}

int main()
{
    int n_base = 0, n_potencia = 0;
    std::cout << "Ingresa el numero base por favor" << std::endl;
    std::cin >> n_base;
    std::cout << "Ingresa el numero exponente por favor" << std::endl;
    std::cin >> n_potencia;
    std::cout << f_potencia(n_base, n_potencia);
    return 0;
}

