// 2022_10_10_Ciclos_CP4.cpp : 
// Yessica Arrez
// Ciclos While Do-While For

#include <iostream>
#include<windows.h>

int main()
{
    bool seguir = true;
    int contador = 0;
    //While comete muchos errores. Se ejecutara siempre que la sentencia sea verdadera

    //while (seguir)
    //{
   //     Sleep(1000);
   //     std::cout << "# " << contador << std::endl;
   //     contador = contador + 1;
   //     if (contador == 100)
   //     {
    //        seguir = false;
    //    }
    //}

    
    //Do while se ejecuta por lo menos una vez
     
    contador = 0;
    do
    {
        Sleep(1000);
        std::cout << "do# " << contador << std::endl;
        contador = contador + 1;
    } while (contador <= 100);

    //For es la mayor sentencia de control
    for (int cont = 0; cont < 100; cont++)
    {
        std::cout << "for# " << cont << std::endl;
    }
}



// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
