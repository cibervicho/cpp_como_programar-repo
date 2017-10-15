// 4.29 (Multiplos de 2 con un ciclo infinito) Escriba un programa que imprima las potencias del
//      entero 2; a saber, 2, 4, 8, 16, 32, 64, etc. Su ciclo 'while' no debe terminar. Que ocurre
//      cuando se ejecuta este programa?
#include <iostream>
using namespace std;

int main (void)
{
    int potencia = 1;

    while (true) //Comentar esta linea para probar con la siguiente
        //while (potencia <= 2048) //Descomentar para probar
    {
        cout << potencia << endl;
        potencia += potencia;
    }
    return 0;
}
