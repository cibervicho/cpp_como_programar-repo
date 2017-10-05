// 4.14 (Limites de credito) Desarrolle una aplicacion en C++ que determine si alguno de los
//      clientes de una tienda departamental se ha excedido del limite de credito en una cuenta.
//      Para cada cliente se tienen los siguientes datos:
//          a) Numero de cuenta (entero)
//          b) Saldo al inicio del mes
//          c) Total de todos los articulos cargados por el cliente en el mes
//          d) Total de todos los creditos aplicados a la cuenta del cliente en el mes
//          e) Limite de credito permitido
//      El programa debe usar una instruccion 'while' para recibir como entrada cada uno de estos
//      datos, debe calcular el nuevo saldo (=saldo inicial + cargos - creditos) y determinar si
//      este excede el limite del credito del cliente. Para los clientes cuyo limite de credito
//      se ha excedido, el programa debe mostrar el numero de cuenta del cliente, su limite de 
//      credito, el nuevo saldo y el mensaje 'Se excedio el limite de su credito'.
#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    int numCuenta = 0;
    double saldoInit = 0;
    double cargosTot = 0;
    double creditTot = 0;
    double limCredito = 0;
    double nuevoSaldo = 0;

    cout << "Introduzca el numero de cuenta (o -1 para salir): "; cin >> numCuenta;
    
    while (numCuenta != -1)
    {
        cout << "Introduzca el saldo inicial: "; cin >> saldoInit;
        cout << "Introduzca los cargos totales: "; cin >> cargosTot;
        cout << "Introduzca los creditos totales: "; cin >> creditTot;
        cout << "Introduzca el limite de credito: "; cin >> limCredito;

        cout << setprecision(2) << fixed;
        nuevoSaldo = saldoInit + cargosTot - creditTot;
        cout << "El nuevo saldo es " << nuevoSaldo << endl;
        if (nuevoSaldo > limCredito) {
            cout << "Cuenta:\t\t" << numCuenta << endl;
            cout << "Limite de credito:\t" << limCredito << endl;
            cout << "Saldo:\t\t" << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl << endl;
        }
        cout << "Introduzca el numero de cuenta (o -1 para salir): "; cin >> numCuenta;
    }

    return 0;
}
