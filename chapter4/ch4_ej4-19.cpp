// 4.19 (Encontrar los dos numeros mas grandes) Utilizando una metodologia similar a la del
//      ejercicio 4.17, encuentre los dos valores mas grandes de los 10 que se introdujeron.
//      [Nota: debe introducir cada numero solo una vez].

#include <iostream>

using namespace std;

int main (void)
{
    int contador = 1;
    int numero = 0;
    int mayor1 = 0, mayor2 = 0;

    while (contador <= 10)
    {
        cout << "Escribe un numero:"; cin >> numero;
        if ((mayor1 != numero) && (mayor2 != numero)) {
            if (mayor1 < numero) {
                mayor2 = mayor1;
                mayor1 = numero;
            }
            else if (mayor2 < numero)
                mayor2 = numero;
        }
        cout << "Los numeros mayores hasta el momento: " << mayor1 << " y " << mayor2 << endl;
        contador++;
    }
    return 0;
}
