// P015.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int num1, num2, a_num = 0, b_num = 0, acumulador = 1;

    std::cout << "Ingresa el primer numero: " << std::endl;
    std::cin >> num1;
    std::cout << "Ingresa el segundo numero: " << std::endl;
    std::cin >> num2;

    for (int i = 2; i <= 11; i++)
    {
        while (a_num % i == 0 && b_num % i == 0)
        {
            acumulador *= i;
            a_num = num1 / i;
            b_num = num2 / i;
        }
    }
    std::cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es: " << acumulador << std::endl;
}

