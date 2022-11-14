// 2022_10_10_003_Decisiones_multiples_CP3.cpp : 
// Yessica Arrez
// En este programa aprenderemos a usar switch case

#include <iostream>
#include <string>

int main()
{	
	int opc = 0;
	std::cout <<"Que se te ofrece?" << std::endl 
		<< "Opc 0.- Helado" << std::endl 
		<< "Opc 1.- Papas" << std::endl;
	std::cin >> opc;
	//  Sintaxis de switch case
	switch (opc)
	{
	case 0:
		//codigo de caso 0
		std::cout << "Esta es la opcion 0" << std::endl;
		break;
	case 1:
		//Codigo de caso 1
		std::cout << "Esta es la opcion 1, saludos" << std::endl;
		break;
	default:
		std::cout << "ta mal" << std::endl;

	
	}
}

