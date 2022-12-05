// P016.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <string>
std::string f_quitar_espacio(std::string palabrita)
{
    std::string no_espacios;

    for (int i = 0; i < palabrita.size(); i++)
    {
        if (palabrita[i] != ' ')
        {
            no_espacios += palabrita[i];
        }
    }
    return no_espacios;
}
bool verificacion(std::string palabrita)
{
    int var1 = 0, var2 = palabrita.size() -1;
    for (int i = 0; i < palabrita.size(); i++)
    {
        if (tolower(palabrita[var1]) == tolower(palabrita[var2]))
        {
            var1++;
            var2--;
        }
        else 
        {
            return false;
        }
    }
    return true;
}
int main()
{
    std::string pal;
    std::cout << "Ingresa el palindromo :0 " << std::endl;
    std::getline(std::cin, pal);
    f_quitar_espacio(pal);
    if (verificacion(pal) == true)
    {
        std::cout << "La frase si es palindroma" << std::endl;
    }
    else 
    {
        std::cout << "La frase no es palindroma" << std::endl;
    }
}