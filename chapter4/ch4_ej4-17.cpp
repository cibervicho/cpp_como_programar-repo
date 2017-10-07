// 4.17 (Encontrar el mas grande) El proceso de encontrar el numero mas grande (es decir, el maximo
//      de un grupo de numeros) se utiliza frecuentemente en apicaciones de computadora. Por
//      ejemplo, un programa para determinar el ganador de un concurso de ventas recibe como entrada
//      el numero de unidades vendidas por cada vendedor. El vendedor que haya vendido mas unidades
//      es el que gana el concurso. Escriba un programa en C++ que utilice una instruccion 'while'
//      para determinar e imprimir el mayor numero de una serie de 10 numeros introducidos por el
//      usuario. Su programa debe utilizar tres variables, como se muestra a continuacion:
//
//         contador:    Un contador para contar hasta 10 (es decir, para llevar el registro de 
//                      cuantos numeros se han introducidos, y para detectar cuando se hayan
//                      procesado los 10 numeros.
//         numero:      El numero actual que se introduce al programa.
//         mayor:       El numero mas grande encontrado hasta ahora.

#include <iostream>

using namespace std;

int main (void)
{
    int contador = 1;
    int numero = 0;
    int mayor = 0;

    while (contador <= 10)
    {
        cout << "Escribe un numero:"; cin >> numero;
        if (mayor < numero)
            mayor = numero;
        cout << "Numero mayor hasta el momento: " << mayor << endl;
        contador++;
    }
    return 0;
}
