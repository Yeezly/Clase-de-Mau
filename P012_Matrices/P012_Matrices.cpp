// P012_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>

int main()
{
	int matriz[2][3];
	int filas = (sizeof(matriz) / sizeof(matriz[0]));
	int columnas = (sizeof(matriz[0]) / sizeof(matriz[0][0]));

	//Lectura de datos
	std::cout << "Matriz de 2x3\n";
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << "Modifica los datos de [" << i << "] [" << j << "]";
			std::cin >> matriz[i][j];
		}
	}

	//Mostrar datos 
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matriz[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	//Matriz dinamica 
	std::cout << "Matriz dinamica\n";

	int fila = 0;
	int columna = 0;
	srand(time(0));

	std::cout << "Numero de filas: " << std::endl;
	std::cin >> fila;
	std::cout << "Numero de columnas: " << std::endl;
	std::cin >> columna;

	int** m_d = new int* [fila];
	for (int i = 0; i < fila; i++)
	{
		m_d[i] = new int[columna];

	}

	if (columna > 3 || fila > 3)
	{
		for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < columna; j++)
			{
				m_d[i][j] = rand() % 10;
			}
		}

	}
	else
	{
		for (int i = 0; i < fila; i++)
		{
			for (int j = 0; j < columna; j++)
			{
				std::cout << "Introduce los valores de [" << i << "] [" << j << "] :  << std::endl";
				std::cin >> m_d[i][j];
			}
		}
	}


	for (int i = 0; i < fila; i++)
	{
		for (int j = 0; j < columna; j++)
		{
			std::cout << m_d[i][j] << std::endl;

		}
	}

	return 0;
}