// 4.13 (Kilometraje de gasolina) Los conductores se preocupan acerca del kilometraje de sus
//      automoviles. Un conductor ha llevado el registro de varios viajes, anotando los kilometros
//      conducidos y los litros usados en cada viaje. Desarrolle un programa en C++ que utilice
//      una instruccion while para recibir como entrada los kilometros conducidos y los litro
//      usados por cada viaje, y que imprima el total de kilometros por litro obtenidos en todos
//      los reabastecimientos hasta este punto.

#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
    int kilometros = 0;
    int kilometrosTotal = 0;
    int litros = 0;
    int litrosTotal = 0;
    double kpl = 0;
    double kplTotal = 0;

    cout << "Escriba los kilometros usados (-1 para salir): "; cin >> kilometros;

    while (kilometros != -1)
    {
        kilometrosTotal += kilometros;
        cout << "Escriba los litros: "; cin >> litros;
        litrosTotal += litros;
        kpl = static_cast<double>(kilometros) / litros;
        kplTotal = static_cast<double>(kilometrosTotal) / litrosTotal;
        cout << setprecision(6) << fixed;
        cout << "KPL en este reabastecimientoi: " << kpl << endl;
        cout << "Total KPL: " << kplTotal << endl << endl;

        cout << "Escriba los kilometros usados (-1 para salir): "; cin >> kilometros;
    }

    return 0;
}
