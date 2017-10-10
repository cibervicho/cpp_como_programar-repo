// 4.22 (Que hace este programa?)
// Ejercicio 4.22: ch4_ej4-22.cpp
// Que es lo que imprime este programa?
#include <iostream>
using namespace std;

int main (void)
{
    unsigned int fila = 10;

    while (fila >= 1)
    {
        unsigned columna = 1;
        while (columna <= 10)
        {
            cout << (fila % 2 ? "<" : ">");
            ++columna;
        }
        --fila;
        cout << endl;
    }
    return 0;
}
