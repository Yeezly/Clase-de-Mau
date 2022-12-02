// P012.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{	
	int matriz[2][3];
	int filas = sizeof(matriz) / sizeof(matriz[0]);
	int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
	

	std::cout << "Primera matriz: Matriz de 2x3\n";

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << "Que valor quieres agregar en [" << i << "] [" << j << "]?" << std::endl;
			std::cin >> matriz[i][j];
		}
	}

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			std::cout << matriz[i][j];

		}
		std::cout << std::endl;
	}
	std::cout << std::endl;


	std::cout << "Segunda matriz: Matriz dinamica\n";
	int var_fila;
	int var_col;
	srand(time(NULL));

	std::cout << "Que numero de filas quieres tener? "; 
	std::cin >> var_fila;
	std::cout << "Que numero de columnas quieres tener? "; 
	std::cin >> var_col;
	int** mat_dyn = new int* [var_fila];

	for (int i = 0; i < var_fila; i++)
	{
		mat_dyn[i] = new int[var_col];

	}

	if (var_col > 3 || var_fila > 3)
	{
		for (int i = 0; i < var_fila; i++)
		{
			for (int j = 0; j < var_col; j++)
			{
				mat_dyn[i][j] = rand() % 10;
			}
		}

	}
	else
	{
		for (int i = 0; i < var_fila; i++)
		{
			for (int j = 0; j < var_col; j++)
			{
				std::cout << "Que valor quieres agregar en [" << i << "] [" << j << "]?";
				std::cin >> mat_dyn[i][j];
			}
		}
	}


	for (int i = 0; i < var_fila; i++)
	{
		for (int j = 0; j < var_col; j++)
		{
			std::cout << mat_dyn[i][j];

		}
		std::cout << std::endl;
	}

	return 0;
}