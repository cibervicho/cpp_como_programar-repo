// 4.21 (Que hace este programa? Que es lo que imprime el siguiente programa?

// Ejercicio 4.21: ch4_ej4-21.cpp
// Que es lo que imprime este programa

#include <iostream>

using namespace std;

int main (void)
{
    unsigned int cuenta = 1; //inicializa cuenta

    while (cuenta <= 10) //itera 10 veces
    {
        //imprime una linea de texto
        cout << (cuenta % 2 ? "****" : "++++++++") << endl;
        ++cuenta; // incrementa cuenta
    } //fin de while
} // fin de main
