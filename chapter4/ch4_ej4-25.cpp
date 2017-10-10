// 4.25 (Cuadrado de asteriscos) Escriba un programa que pida al usuario que introduzca el tamanio
//      del lado de un cuadrado y que muestre un cuadrado hueco de ese tamanio, compuesto de
//      asteriscos y espacios en blanco. Su programa debe funcionar con cuadrados que tengan lados
//      de todas las longitudes entre 1 y 20.
#include <iostream>
using namespace std;

int main (void) 
{
    int lado = 0;
    cout << "Elige el tamaño del lado (1..20) o -1 para salir: "; cin >> lado;

    int x = 1, y = 1;
    while (lado != -1)
    {
        while (y <= lado)
        {
            while (x <= lado)
            {
                if ((y == 1) || (y == lado))
                {
                    cout << "* ";
                }
                else
                {
                    if ((x == 1) || (x == lado))
                        cout << "* ";
                    else
                        cout << "  ";
                }
                ++x;
            }
            ++y;
            cout << endl;
            x = 1;
        }
        y = 1;
        cout << "Elige el tamaño del lado (1..20) o -1 para salir: "; cin >> lado;
    }

    return 0;
}
