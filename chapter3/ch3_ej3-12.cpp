#include <iostream>
#include "ch3_ej3-12_Cuenta.h"

using namespace std;

int main (void)
{
    cout << "*** SIMULACION DE CUENTA BANCARIA ***" << endl << endl;

    Cuenta cuenta1(500);
    cout << "  Saldo inicial de cuenta1: $" << cuenta1.obtenerSaldo() << endl;
    Cuenta cuenta2(-10);
    cout << "  Saldo inicial de cuenta2: $" << cuenta2.obtenerSaldo() << endl << endl;

    cuenta1.abonar(150);
    cout << "  Abonando $150 a cuenta1. Saldo actual de cuenta1: $" << cuenta1.obtenerSaldo() << endl;
    cuenta2.abonar(300);
    cout << "  Abonando $300 a cuenta2. Saldo actual de cuenta2: $" << cuenta2.obtenerSaldo() << endl << endl;

    cuenta1.cargar(700);
    cout << "  Retirando $700 a cuenta1. Saldo actual de cuenta1: $" << cuenta1.obtenerSaldo() << endl;
    cuenta2.cargar(70);
    cout << "  Retirando $70 a cuenta2. Saldo actual de cuenta2:  $" << cuenta2.obtenerSaldo() << endl;

    return 0;
}
