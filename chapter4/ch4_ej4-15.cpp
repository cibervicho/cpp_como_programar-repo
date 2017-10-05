// 4.15 (Calculadora de comisiones de ventas) Una empresa grande paga a sus vendedores mediante
//      comisiones. Los vendedores reciben $200 por semana, mas el 9% de sus ventas brutas durante
//      esa semana. Por ejemplo, un vendedor que vende $5000 de productos quimicos en una semana,
//      recibe $200 mas el 9% de $5000, o un total de $650. Desarrolle un programa en C++ que
//      utilice una instruccion 'while' para recibir como entrada las ventas brutas de cada vendedor
//      de la semana anterior, y calcule y muestre los ingresos de ese vendedor. Procese las cifras
//      de un vendedor a la vez.
#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
    double ventas = 0;
    double salario(0);

    cout << "Introduzca las ventas en dolares (o -1 para salir): "; cin >> ventas;

    while (ventas != -1)
    {
        salario = 200 + ((ventas * 9) / 100);
        cout << setprecision(2) << fixed;
        cout << "El salario es: " << salario << endl << endl;

        cout << "Introduzca las ventas en dolares (o -1 para salir): "; cin >> ventas;
    }

    return 0;
}
