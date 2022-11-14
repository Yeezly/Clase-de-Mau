// 2022_10_06_000_P006.cpp : Calculadora simple
// Yessica Arrez

#include <iostream>
#include <math.h>

int main()
{
    float num1 = 0, num2 = 0;
    int opcion = 0;
    float resultado = 0;

    std::cout << "Hola, que quieres hacer?\n";
    std::cout << "0. Sumar 1. Restar 2.Multiplicar\n";
    std::cout << "3. Dividir 4. Raiz 5. Potencia\n";
    std::cin >> opcion;

    switch (opcion)
    {
        case 0:
            std::cout << "Ingresa dos numeros para sumar por favor\n";
            std::cin >> num1;
            std::cin >> num2;
            resultado = num1 + num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case 1:
            std::cout << "Ingresa dos numeros para restar por favor\n";
            std::cin >> num1;
            std::cin >> num2;
            resultado = num1 - num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case 2:
            std::cout << "Ingresa dos numeros para multiplicar por favor\n";
            std::cin >> num1;
            std::cin >> num2;
            resultado = num1 * num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case 3:
            std::cout << "Ingresa dos numeros para dividir por favor\n";
            std::cin >> num1;
            std::cin >> num2;
            resultado = num1 / num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case 4:
            std::cout << "Ingresa el numero al que quieres sacar raiz cuadrada\n";
            std::cin >> num1;
            resultado = (sqrt(num1));
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case 5:
            std::cout << "Ingresa dos numeros para potenciar por favor\n";
            std::cin >> num1;
            std::cin >> num2;
            resultado = (pow(num1, num2));
            std::cout << "El resultado es: " << resultado << std::endl;
        default:
            break;
    }

}