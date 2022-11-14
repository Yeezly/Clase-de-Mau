// 2022_10_24_006_arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
using namespace std;

int main()
{
    //Tipo de dato; nombre de la variable; [# de elementos]

    int vec1[10];
    char vec2[50];
    bool vec3[60];
    string vec4[100];
    float vec5[2];
    double vec6[5];

    //arreglos predefinidos
    string vec7[5] = { "Dato1", "Dato2", "Dato3", "Dato4", "Dato5" };
    int vec8[] = {1,2,3,4,5,6,7,8,9};

    cout << "El vector 7 en su posicion 3 tiene a: " << vec7[2] << endl;
    cout << "El vector 7 en su posicion 2 tiene a: " << vec7[1] << endl;

    vec7[0] = "Santiago";
    cout << "El vector 7 en su posicion 1 tiene a: " << vec7[0] << endl;

    //metodo para recorrer todo el arreglo
    for (int i = 0; i < 5; i++)
    {
        cout << "El vector 7 tiene a: " << vec7[i] << " en la posicion " << i <<
            " y es el elemento: " << i + 1 << endl;
    }
}

