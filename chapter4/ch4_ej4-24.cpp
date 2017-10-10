// 4.24 (Otro problema del else suelto) Modifique el siguiente codigo para producir la salida que 
//      se muestra. Utilice las tecnicas de sangria apropiadas. No debe hacer modificaciones en el
//      codigo, solo insertar llaves. El compilador ignora la sangria en un programa en C++. Hemos
//      eliminado la sangria en el codigo dado, para hacer el problema mas retador.
#include <iostream>
using namespace std;

int main (void)
{
    int x, y;
    int opc = 0;
    cout << "Seleccione una opcion (1, 2, 3 o 4): "; cin >> opc;
    if (opc == 1)
    {
        x = 5;
        y = 8;
        if (y == 8)
            if (x == 5)
                cout << "@@@@@" << endl;
            else
                cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
    else if (opc == 2)
    {
        x = 5;
        y = 8;
        if (y == 8)
            if (x == 5)
                cout << "@@@@@" << endl;
            else {
                cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl; }
    }
    else if (opc == 3)
    {
        x = 5;
        y = 8;
        if (y == 8)
            if (x == 5)
                cout << "@@@@@" << endl;
            else {
                cout << "#####" << endl;
        cout << "$$$$$" << endl; }
        cout << "&&&&&" << endl;
    }
    else if (opc == 4)
    {
        x = 5;
        y = 7;
        if (y == 8) {
            if (x == 5)
                cout << "@@@@@" << endl; }
            else {
                cout << "#####" << endl;
        cout << "$$$$$" << endl; 
        cout << "&&&&&" << endl; }
    }
    else
        cout << "Opcion invalida!" << endl;
}
