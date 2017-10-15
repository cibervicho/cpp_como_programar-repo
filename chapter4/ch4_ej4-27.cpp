// 4.27 (Imprimir el equivalente decimal de un numero binario) Escriba un programa que reciba como
//      entrada un entero que contenga solo ceros y unos (un entero 'binario'), y que imprima su
//      equivalente decimal. Use los operadores de modulo y division para elegir los digitos del
//      numero binario uno a la vez, de derecha a izquierda.

#include <iostream>
using namespace std;

int main (void)
{
    int binario  = 0;
    int bit      = 0;
    int contador = 0;
    int posicion = 1;
    int decimal  = 0;
    int potencia = 1;
    const int EXIT = -1;
    const int MAX  = 8;
    const int BASE = 2;

    cout << "Escribe un numero binario (max 8 bits) o -1 para salir: "; cin >> binario;

    while(binario != EXIT)
    {
        if (binario == 0)
            cout << "Binario: [" << binario << "] = Decimal [0]" << endl;
        else {
            while (contador < MAX)
            {
                // Min: 0b0000_0000 = 0x00 =   0
                // Max: 0b1111_1111 = 0xFF = 255

                //Obtenemos el bit con el que vamos a trabajar
                bit = (binario / posicion) % BASE;
                //Calculamos su equivalente a decimal y lo sumamos
                decimal += bit * potencia;

                //incrementamos la potencia
                potencia += potencia;
                //actualizamos la posicion para obtener el bit correcto
                posicion *= 10;
                //incrementamos el contador de control
                contador++;
            }
            cout << "Binario: [" << binario << "] = Decimal [" << decimal << "]" << endl;
        }
        //Reset a las variables de control
        contador = 0;
        posicion = 1;
        decimal  = 0;
        potencia = 1;

        cout << "Escribe un numero binario (max 8 bits) o -1 para salir: "; cin >> binario;
    }
    return 0;
}
