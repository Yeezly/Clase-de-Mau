// 2022_09_27_000_ P004.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Calculadora descompuesta

#include <iostream>
#include <math.h>
//#include <stdlib.h>


int main()
{
    float num_1 = 0;
    float num_2 = 0;
    float r_suma = 0;
    float r_resta = 0;
    float r_mul = 0;
    float r_div = 0;
    float r_pot = 0;
    float r_ra = 0;


    std::cout << "Hola usuario, ingresa por favor 2 numeros\n" << std::endl;
    std::cin >> num_1;
    std::cin >> num_2;
    r_suma = (num_1 + num_2);
    std::cout << "Tus resultados son: \n";
    std::cout << "Suma: \n";
    std::cout << r_suma << std::endl;
    std::cout << "Resta: \n";
    r_resta = (num_1 - num_2);
    std::cout << r_resta << std::endl;
    std::cout << "Multiplicacion: \n";
    r_mul = (num_1 * num_2);
    std::cout << r_mul << std::endl;
    std::cout << "Division: \n";
    r_div = (num_1 / num_2);
    std::cout << r_div << std::endl;
    std::cout << "Potencia: \n";
    r_pot = (pow(num_1, num_2));
    std::cout << r_pot << std::endl;
    std::cout << "Raiz: \n";
    r_ra = (sqrt(num_1));
    std::cout << r_ra << std::endl;
}