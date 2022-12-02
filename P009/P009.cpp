// P009.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    /*
    std::string color_cp1 = "Rubio";
    std::string color_cp2 = "Pelirojo";
    std::string color_cp3 = "Azules";
    std::string color_cp4 = "Marrones";
    if (color_cp1 == "Rubio")
    {
        std::cout <<
    }
    */

    int arreglo[3] = { 1,2,3 };
    int cajas[9][9];
    int cont = 0;
    //= { {0,0,0,0,0,0,0,0,0},{1,1,1,1,1,1,1,1,1},{2,2,2,2,2,2,2,2,2},{3,3,3,3,3,3,3,3,3},{1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1} };

//Ciclo para mostrar el arreglo simple
/*for (int i = 0; i < 3; i++)
{
    std::cout << "La posicion " << i << " tiene al valor: " << arreglo[i] << std::endl;
}*/
//Ciclo para mostrar la matriz
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < 10; k++)
        {   
            Sleep(500);
            std::cout << j << "," << k << std::endl;
        }
    }
    /*
    for (int j = 0; j < 9; j++)
    {
        for (int k = 0; k < 9; k++)
        {
            cajas[j][k] = j;
            std::cout << cajas[j][k] << " ";
        }
        std::cout << std::endl;
        cont = cont+1;
    }*/
}