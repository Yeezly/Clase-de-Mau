// 2022_09_01_000_P005.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

int main()
{
    bool comp; //d
    int edad = 0; //d
    std::string palabra = ""; //s
    float estatura = 0; //f
    char sexo = ' '; //c de char
    double doble = 0; //lf

    printf("Hola usuario\n");
    printf("Ingresa si es true o false: \n");
    scanf_s("%d", &comp);
    printf("La respuesta es %d\n", comp);

    printf("Ingresa tu edad: \n");
    scanf_s("%d", &edad);
    printf("Tu edad es %d\n", edad);

    printf("Ingresa una opinion: \n");
    std::cin.ignore();
    std::getline(std::cin, palabra);
    printf("Tu opinion es %s\n", &palabra);

    printf("Ingresa tu estatura: \n");
    scanf_s("%f", &estatura);
    printf("Tu estatura es %f\n", estatura);

    printf("Ingresa tu sexo: \n");
    scanf_s("%c", &sexo);
    printf("Tu sexo es %c\n", &sexo);

    printf("Ingresa tu numero: \n");
    scanf_s("%lf", &doble);
    printf("Tu numero es %lf\n", doble);


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
