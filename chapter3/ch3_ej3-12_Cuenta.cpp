#include <iostream>
#include "ch3_ej3-12_Cuenta.h"

using namespace std;

Cuenta::Cuenta(int saldoInicial)
{
    if (saldoInicial >= 0)
        saldo = saldoInicial;
    else{
        saldo = 0;
        cout << "ERROR: Saldo inicial invalido. Iniciando a cero (0) por defecto" << endl;
    }
}

void Cuenta::abonar (int monto)
{
    saldo += monto;
}

void Cuenta::cargar (int monto)
{
    if (monto <= saldo)
        saldo -= monto;
    else
        cout << "ERROR: El monto a cargar excede el saldo de la cuenta. Ignorando transaccion." << endl;
}

int Cuenta::obtenerSaldo() const
{
    return saldo;
}

