// P014.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

void bin(int num)
{
	if (num > 1)
	{
		bin(num / 2);
	}
	else
	{

	}
	std::cout << num % 2;
}

int main()
{
	int num;

	std::cout << "Bienvenido a la calculadora de decimal a binario" << std::endl;
	std::cout << "Dame un numero por favor " << std::endl;
	std::cin >> num;
	std::cout << num << " en binario es: ";
	bin(num);
}