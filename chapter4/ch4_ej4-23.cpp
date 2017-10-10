// 4.23 (Prolema del else suelto) Determine la salida de cada uno de los siguientes conjuntos de
//      codigo, cuando 'x' es 11 y 'y' es 9. El compilador ignora la sangria en un programa en C++.
//      El compilador de C++ siempre asocia un 'else' con el 'if' anterior, a menos que se le
//      indique de otra forma mediante la colocacion de llaves ({}). A primera vista, el programador
//      tal vez no este seguro de cual 'if' corresponde a cual 'else'; esta situacion se conoce
//      como el 'problema del else suelto'. Hemos eliminado la sangria del siguiente codigo para
//      hacer el problema mas retador.
#include <iostream>
using namespace std;

int main (void)
{
    int x = 11;
    int y = 9;
    int resp = 0;
    cout << "Que problema quiere resolver (1 o 2)?: "; cin >> resp;
    if(resp == 1)
    {
        if (x < 10)
            if (y > 10)
                cout << "*****" << endl;
            else
                cout << "#####" << endl;
        cout << "$$$$$" << endl;
    }
    else if (resp == 2)
    {
        if (x < 10)
        {
            if (y > 10)
                cout << "*****" << endl;
        }
        else
        {
            cout << "#####" << endl;
            cout << "$$$$$" << endl;
        }
    }
    else
        cout << "Opcion invalida!" << endl;
    return 0;
}
