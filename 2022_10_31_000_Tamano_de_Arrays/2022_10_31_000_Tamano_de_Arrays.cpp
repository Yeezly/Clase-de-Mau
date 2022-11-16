// 2022_10_31_000_Tamano_de_Arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
    int edades[5][10];
    int filas = (sizeof(edades) / sizeof(edades[0]));
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    srand(time(NULL));
    

    for (int i = 0; i < filas; i++)
    {   
        for (int j = 0; j < columnas; j++) 
        {
            edades[i][j] = rand() % 10;
        }
       
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << edades[i][j] << " ";
        }
        std::cout << std::endl;
    }

    
    srand(time(NULL));
     = 1 + rand() % (4 - 1);
     */

    //P012 MATRICES
    // Matriz 2*3

    int matriz[2][3];
    int filas = (sizeof(matriz) / sizeof(matriz[0]));
    int columnas = (sizeof(matriz[0]) / sizeof(matriz[0][0]));
    int respuesta = 0;
    srand(time(NULL));

    // Mostrar coordenada

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "Estás en la coordenada (" << i << ", " << j << ")" << std::endl;
        }
    }

    //entrada
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "Estás en la coordenada (" << i << ", " << j << ")" << std::endl;
            
            matriz[i][j] = 0;
        }
    }

    //salida
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Matriz dinamica
    


}
