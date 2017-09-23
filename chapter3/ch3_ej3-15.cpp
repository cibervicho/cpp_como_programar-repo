#include <iostream>
#include "ch3_ej3-15_Fecha.h"
#include <string>

using namespace std;

int main()
{
    Fecha fecha1(6, 5, 1981);
    cout << "Fecha1 inicial:\t\t" << fecha1.mostrarFecha() << endl << endl;

    fecha1.establecerDia(20);
    cout << "Fecha1 nuevo dia:\t" << fecha1.mostrarFecha() << endl << endl;

    fecha1.establecerMes(13);
    fecha1.establecerMes(0);

    fecha1.establecerMes(11);
    cout << "Fecha1 nuevo mes:\t" << fecha1.mostrarFecha() << endl << endl;

    fecha1. establecerAnio(2017);
    cout << "Fecha1 nuevo año:\t" << fecha1.mostrarFecha() << endl << endl;
    
    return 0;
}
