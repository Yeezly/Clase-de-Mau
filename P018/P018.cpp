// P018.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int f_multiplicacion(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        return 0;
    }
    else
    {
        return num1 * num2;
    }
}

int main()
{
    int n1 = 0, n2 = 0;
    std::cout << "Ingresa el primer numero por favor" << std::endl;
    std::cin >> n1;
    std::cout << "Ingresa el segundo numero por favor" << std::endl;
    std::cin >> n2;
    std::cout << " La respuesta es: " << f_multiplicacion(n1, n2);
    return 0;
}
