// 2022_10_14_000_P008.cpp : Batalla Pokemon
// Yessica Arrez


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    int poke1 = 0, poke2 = 0;
    int hp_p1 = 20, hp_p2 = 20;
    int ataque = 2;
    int opcion = 0;
    bool condition = true;
    string pbul = "Bulbasaur", pchar = "Charmander", psqu = "Squirtle", namepoke = "";

    cout << "Que pokemon quieres? 1. Bulbasaur 2. Charmander 3. Squirtle\n";
    cin >> poke1;
    Sleep(1500);

    srand(time(NULL));
    poke2 = 1 + rand() % (4 - 1);

    if (poke2 == poke1)
    {
        poke2 = 1 + rand() % (4 - 1);
    }

    switch (poke1)
    {
    case 1:
        cout << "Tu pokemon es " << pbul << endl;
        break;
    case 2:
        cout << "Tu pokemon es " << pchar << endl;
        break;
    case 3:
        cout << "Tu pokemon es " << psqu << endl;
        break;
    default:
        break;
    }

    Sleep(1500);

    switch (poke2)
    {
    case 1:
        cout << "El pokemon oponente es " << pbul << endl;
        namepoke = pbul;
        break;
    case 2:
        cout << "El pokemon oponente es " << pchar << endl;
        namepoke = pchar;
        break;
    case 3:
        cout << "El pokemon oponente es " << psqu << endl;
        namepoke = psqu;
        break;
    default:
        break;
    }

    Sleep(1500);

    cout << "Que comience el enfrentamiento!\n";

    Sleep(1500);

    while (condition)
    {
        cout << "Quieres atacar al enemigo? 1. Si 2. No\n";
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Has decidido atacar!\n";
            hp_p2 = hp_p2 - 4;
            Sleep(1500);
            cout << "A tu enemigo le queda " << hp_p2 << " de vida\n";
            if (hp_p2 <= 0)
            {
                cout << "Has derrotado a " << namepoke << "!\n";
                condition = false;
                break;
            }
        }
        else
        {
            if (opcion == 2)
            {
                cout << "Has decidido no atacar!\n";
            }
        }

        Sleep(1500);

        cout << namepoke << " te atacara ahora!\n";

        Sleep(1500);

        hp_p1 = hp_p1 - 4;
        if (hp_p1 <= 0)
        {
            cout << "Has sido derrotado\n";
            condition = false;
            break;
        }
        else
        {
            cout << "A tu pokemon le queda " << hp_p1 << " de vida\n";
            Sleep(1500);
        }
    }
}