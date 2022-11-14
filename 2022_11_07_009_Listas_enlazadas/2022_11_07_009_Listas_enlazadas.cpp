// 2022_11_07_009_Listas_enlazadas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Yessica Arrez
//Listas enlazadas

#include <iostream>

#include <iostream>

class nodo
{
public:
    int edad;
    std::string nombre;
    nodo* next;
};
struct Libro
{
    std::string nombre;
    std::string autor;
    int fecha;
}Guardados[10];
enum ataquepokemon
{
    tackleada,
    quecomatierra,
    sakakk,
    mtkaka,
    milaniosdedolor = 1000
};
void revision();
void imprimir(nodo* n)//METODO
{
    while (n != NULL)
    {
        std::cout << n->edad << std::endl;
        n = n->next;
    }
}
int sumar(int a, int b)//Funcion o Procedimiento
{
    int resultado;
    resultado = a + b;
    return resultado;
}
int main()
{
    revision();
    int num1 = 5, num2 = 1;
    int res;
    res = sumar(num1, num2);

    Libro Guardados[10];
    Guardados[0].nombre = "Batallas en el desierto";
    Guardados[0].autor = "José Emilio Pacheco";
    Guardados[0].fecha = 1981;

    std::cout << Guardados[0].nombre << std::endl;
    std::cout << Guardados[0].autor << std::endl;
    std::cout << Guardados[0].fecha << std::endl;

    ataquepokemon pikashu = tackleada;
    std::cout << pikashu << std::endl;

    pikashu = sakakk;
    std::cout << pikashu << std::endl;

    nodo* Iker = NULL;
    nodo* Tadeo = NULL;
    nodo* Jose = NULL;

    Iker = new nodo();
    Tadeo = new nodo();
    Jose = new nodo();

    Iker->edad = 18;
    Iker->nombre = "Iker";
    Iker->next = Tadeo;

    Tadeo->edad = 15;
    Tadeo->nombre = "Tadeo";
    Tadeo->next = Jose;

    Jose->edad = 12;
    Jose->nombre = "Jose";
    Jose->next = NULL;

    imprimir(Iker);
}
void revision()
{

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
