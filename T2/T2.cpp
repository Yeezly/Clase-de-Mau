// 2022_09_26_000_Tipos_de_datos_CP1.cpp : 
// Yessica Arrez
// En esta practica conoceremos la sintaxis para declarar variables
// Solicitar, recibir y mostrar valores.

#include <iostream>
#include <string>

int main()
{   //Reglas o sintaxis de declarar variables
    //1)Tipo de dato, 2)Nombre, 3)Inicialización, 4)Fin de comando.
    //bool Comprobacion = 0;
    int edad = 0;
    std::string palabra;
    float estatura = 1.80;
    char nombre = ' ';
    double doble = 0;

    //Sintaxis para hablar con el usuario
    //1. Palabra reservada 2. Concatenar 3.Entre comillas escribir
    //4. Concatenar 5. Salto de linea 6. Fin de comando.
    std::cout << "Hola usuario" << std::endl;
    //std::cout << "El valor de la comprobación es: " << Comprobacion 
    //    << std::endl;
    //Sintaxis Solicitar valores
    //1. Palabra reservada 2. Concatenar 3.Entre comillas escribir
    //4. Concatenar 5. Salto de linea 6. Fin de comando.
    //std::cout << "Hola ingresa 0 o 1 para saber si es False o True\n";
    //Sintaxis para Recibir valores
    //1. Palabra reservada para pedir valores, 2. Concatenar 
    //3. Variable donde se guarda lo solicitado.
   // std::cin >> Comprobacion;
    //Sintaxis para Mostrar valores
    //1. Palabra reservada 2. Concatenar 3.Entre comillas escribir
    //4. Concatenar 5. Salto de linea 6. Fin de comando.
   // std::cout << "El valor de la comprobación es: " << 
    //    Comprobacion << std::endl;
    //int
    std::cout << "Ingresa tu edad\n";
    std::cin >> edad;
    std::cout << "Tu edad es: " <<
        edad << std::endl;
    //string
    std::cout << "Ingresa una opinion\n";
    std::cin.ignore();
    std::getline(std::cin, palabra);
    std::cout << "Tu opinion es: " << palabra << std::endl;
    //float
    std::cout << "Ingresa tu estatura\n";
    std::cin >> estatura;
    std::cout << "Tu estatura es: " << estatura << std::endl;
    //char
    std::cout << "Ingresa tu primer nombre\n";
    std::cin >> nombre;
    std::cout << "Tu nombre es: " <<
        nombre << std::endl;
    //double
    std::cout << "Ingresa tu numero: ";
    std::cin >> doble;
    std::cout << "Tu numero es: " <<
        doble << std::endl;
}