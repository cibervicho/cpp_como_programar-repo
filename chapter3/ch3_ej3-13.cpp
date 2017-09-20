#include <iostream>
#include <string>
#include "ch3_ej3-13_Factura.h"

using namespace std;

int main(void)
{
    string numero;
    string descripcion;
    int    cantidad;
    int    precio;

    cout << "*** SIMULACION DE FACTURA ***" << endl << endl;

    cout << "   Proporcione un numero de articulo: "; getline (cin, numero);
    cout << "   Proporcione la descripcion del articulo: "; getline (cin, descripcion);
    cout << "   Proporcione la cantidad de articulos: "; cin >> cantidad;
    cout << "   Proporcione el precio por unidad: "; cin >> precio;

    Factura factura1(numero, descripcion, cantidad, precio);

    cout << "\n   Factura generada con los siguientes datos:"
         << "\n     Numero de Articulo:      \t" << factura1.obtenerNumeroDeArticulo()
         << "\n     Descripcion de Articulo: \t" << factura1.obtenerDescripcionDeArticulo()
         << "\n     Cantidad del Articulo:   \t" << factura1.obtenerCantidadDeArticulo()
         << "\n     Precio del Articulo:     \t" << factura1.obtenerPrecioPorArticulo() << endl << endl;

    cout << "                       Total: \t$" << factura1.obtenerMontoFactura() << endl << endl;

    return 0;
}
