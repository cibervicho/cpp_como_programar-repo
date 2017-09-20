#include <string>
#include "ch3_ej3-13_Factura.h"

using namespace std;

Factura::Factura(string numero,
                 string descripcion,
                 int cantidad,
                 int precio)
{
    establecerNumeroDeArticulo(numero);
    establecerDescripcionDeArticulo(descripcion);
    establecerCantidadDeArticulo(cantidad);
    establecerPrecioPorArticulo(precio);
}

void Factura::establecerNumeroDeArticulo(string numero)
{
    numeroDeArticulo = numero;
}

string Factura::obtenerNumeroDeArticulo() const
{
    return numeroDeArticulo;
}

void Factura::establecerDescripcionDeArticulo(string descripcion)
{
    descripcionDeArticulo = descripcion;
}

string Factura::obtenerDescripcionDeArticulo() const
{
    return descripcionDeArticulo;
}

void Factura::establecerCantidadDeArticulo(int cantidad)
{
    if(cantidad < 0)
        cantidadDeArticulo = 0;
    else
        cantidadDeArticulo = cantidad;
}

int Factura::obtenerCantidadDeArticulo() const
{
    return cantidadDeArticulo;
}

void Factura::establecerPrecioPorArticulo(int precio)
{
    if(precio < 0)
        precioPorArticulo = 0;
    else
        precioPorArticulo = precio;
}

int Factura::obtenerPrecioPorArticulo() const
{
    return precioPorArticulo;
}

int Factura::obtenerMontoFactura() const
{
    int total = 0;
    total = (cantidadDeArticulo * precioPorArticulo);

    return total;
}

